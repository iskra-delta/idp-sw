        ;; speccy.s
        ;; 
        ;; decoding speccy screen
		;;
        ;; MIT License (see: LICENSE)
        ;; Copyright (C) 2022 Tomaz Stih
        ;;
		;; 2022-03-21   tstih
        .module speccy

        .globl  __decode_addr

        .area   _CODE

        ;; --------------------------------------------------
        ;; uint8_t *_decode_addr(uint16_t *addr, uint8_t *xy)
        ;; --------------------------------------------------
__decode_addr::
        pop     bc                      ; return address
        pop     hl                      ; hl=addr
        pop     de                      ; de=byte *xy
        ;; restore stack
        push    de
        push    hl
        push    bc
        ;; get x
        ld      a,l
        and     #0b00011111             ; lores x
        sla     a                       ; *2
        sla     a                       ; *4
        sla     a                       ; *8 ... hires x
        ld      b,a
        ld      a,l                     ; get high bit
        and     #0b11100000             ; get y3-y5
        srl     a
        srl     a
        or      h                       ; we have y0-y5
        and     #0b11100000             ; clear top bits
        ld      c,a                     ; store to c
        ld      a,h
        and     #0b00011000
        sla     a
        sla     a
        sla     a
        or      c                       ; a has y, b has x
        ;; and draw pixel
        ex      de,hl                   ; byte *xy pointer to hl
        ld      (hl),b                  ; x first
        inc     hl
        ld      (hl),a                  ; now y
        dec     hl
        ret
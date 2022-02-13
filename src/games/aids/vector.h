#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <stdio.h>
#include <math.h>

#ifndef __SDCC
#define float double
#endif

typedef struct vector2d_s {
	float x;
	float y;
} vector2d_t;

extern void add_vector(vector2d_t* a, vector2d_t* b);

extern vector2d_t *add_vector_new(vector2d_t* a, vector2d_t* b, vector2d_t *result);

extern void multiply_vector(vector2d_t* v, float n);

extern void divide_vector(vector2d_t* v, float n);

extern void rotate_vector(vector2d_t* v, float degrees);

extern float magnitude_vector(vector2d_t* v);

extern void normalise_vector(vector2d_t* v);

extern void limit_vector(vector2d_t* v, float limit);

#endif /* __VECTOR_H__ */
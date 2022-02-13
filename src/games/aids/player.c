#include "player.h"

void init_player(player_t* p) {
	
	int i = 0;
	vector2d_t translation = {_width / 2, _height / 2};
	
	p->hit_radius = 15;
	p->lives = 3;
	p->location.x = 0;
	p->location.y = 0;
	p->velocity.x = 0;
	p->velocity.y = 0;
	p->obj_vert[0].x = 0;
	p->obj_vert[0].y = 1.5;
	p->obj_vert[1].x = -1;
	p->obj_vert[1].y = -1;
	p->obj_vert[2].x = 1;
	p->obj_vert[2].y = -1;

	/* convert player verts from object space to world space */
	for(i = 0; i < P_VERTS; i++) {
		multiply_vector(&p->obj_vert[i], -1);
		multiply_vector(&p->obj_vert[i], 12);
		add_vector(&p->world_vert[i], &p->obj_vert[i]);
		add_vector(&p->world_vert[i], &translation);
	}
	
	for(i = 0; i < BULLETS; i++) {
		
		p->bullets[i].alive = false;
	}
}

void apply_force(vector2d_t* velocity, vector2d_t* v) {
	add_vector(velocity, v);
}

vector2d_t * get_direction(player_t* p, vector2d_t *result) {
    memcpy(result,&(p->obj_vert[0]),sizeof(vector2d_t));
	normalise_vector(result);

	return result;
}

void shoot_bullet(player_t* p) {
	
	int i = 0;

	for (i = 0; i < BULLETS; i++) {
		
		if (p->bullets[i].alive == false) {
			p->bullets[i].alive = true;
			p->bullets[i].location = p->world_vert[0];
			get_direction(p,&(p->bullets[i].velocity));
			multiply_vector(&p->bullets[i].velocity, 4.1);
			break;
		}
	}
}

void draw_player(gpx_t* g, player_t* p) {
	int i = 0;
	if (p->lives > 0) {
        /* draw ship triangle... */
        gpx_draw_line(g, 
            p->world_vert[0].x, p->world_vert[0].y, 
            p->world_vert[1].x, p->world_vert[1].y);
        gpx_draw_line(g, 
            p->world_vert[1].x, p->world_vert[1].y, 
            p->world_vert[2].x, p->world_vert[2].y);
        gpx_draw_line(g, 
            p->world_vert[2].x, p->world_vert[2].y, 
            p->world_vert[0].x, p->world_vert[0].y);
    }

	/* draw bullets */
	for (i = 0; i < BULLETS; i++) {
		if (p->bullets[i].alive == true) 
            gpx_draw_pixel(g, p->bullets[i].location.x, p->bullets[i].location.y);
	}
}

void update_player(player_t* p) {
	
	limit_vector(&p->velocity, 2);
	add_vector(&p->location, &p->velocity);
	
	vector2d_t translation = {_width / 2, _height / 2};
    vector2d_t result;

	int i = 0; 

	for (i =0; i < P_VERTS; i++) {
        add_vector_new(&p->obj_vert[i], &p->location, &result);
		memcpy(&(p->world_vert[i]),&result,sizeof(vector2d_t));
		add_vector(&p->world_vert[i], &translation);
	}
	
	for (i = 0; i < BULLETS; i++) 
		add_vector(&p->bullets[i].location, &p->bullets[i].velocity);
}

void rotate_player(player_t* p, float degrees) {
	
	int i = 0;

	for (i =0; i < P_VERTS; i++)
		rotate_vector(&p->obj_vert[i], degrees);
}

void bounds_player(player_t* p) {
	
	int i = 0;
	
	if (p->location.x < -_width / 2) p->location.x = _width / 2;
	if (p->location.x > _width / 2) p->location.x = -_width / 2;
	if (p->location.y < -_height / 2) p->location.y = _height / 2;
	if (p->location.y > _height / 2) p->location.y = -_height / 2;

	/* bullet is out of bounds, reset bullet to be shot again
	   bullets are in world space */
	for (i = 0; i < BULLETS; i++) {
		
		if (p->bullets[i].location.x < 0 || p->bullets[i].location.x >= _width) 
			p->bullets[i].alive = false;
		
		if (p->bullets[i].location.y < 0 || p->bullets[i].location.y >= _height) 
			p->bullets[i].alive = false;
	}
}


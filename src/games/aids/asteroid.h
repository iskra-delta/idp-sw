#ifndef __ASTEROID_H__
#define __ASTEROID_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include <gpx.h>

#include "vector.h"
#include "game.h"

enum sizes {SMALL, MEDIUM, LARGE};

typedef struct asteroid_s {
	int alive;
	enum sizes size;
	float hit_radius;
	float rotation;
	vector2d_t location;
	vector2d_t velocity;
	vector2d_t obj_vert[VERTS];
	vector2d_t world_vert[VERTS];
} asteroid_t;

extern void init_asteroids(asteroid_t asteroids[], int size);
extern void update_asteroids(asteroid_t asteroids[], int size);
extern void draw_asteroids(gpx_t *g, asteroid_t asteroids[], int size);
extern int shrink_asteroid(asteroid_t* a, int size);
extern void spawn_asteroids(asteroid_t a[], int length, int size, vector2d_t* v);
extern void bounds_asteroids(asteroid_t asteroids[], int size);
extern int collision_asteroids(asteroid_t asteroids[], int size, vector2d_t* v, float radius);

#endif /* __ASTEROID_H__ */
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include <gpx.h>

#include "vector.h"
#include "game.h"

typedef struct bullet_s {
	vector2d_t location;
	vector2d_t velocity;
	bool alive;
} bullet_t;

typedef struct player_s {

	float hit_radius;
	int lives;
	vector2d_t location;
	vector2d_t velocity;
	vector2d_t obj_vert[P_VERTS];
	vector2d_t world_vert[P_VERTS];
	bullet_t bullets[BULLETS];
} player_t;

extern void init_player(player_t* p);

extern void draw_player(gpx_t* g, player_t* p);

extern void shoot_bullet(player_t* p);

extern void update_player(player_t* p);

extern void bounds_player(player_t* p);

extern void apply_force(vector2d_t* velocity, vector2d_t* v);

extern void rotate_player(player_t* p, float degrees);

extern vector2d_t *get_direction(player_t* p, vector2d_t *result);
#include "asteroid.h"

void init_asteroids(asteroid_t asteroids[], int size) {
	
	int i = 0;
	int j = 0;
	vector2d_t translation = {_width / 2, _height / 2};
	
	for (i = 0; i < size; i++) {
		
		int sign_x = rand() % 100;
		int sign_y = rand() % 100;
		
		/* start asteroid in random location */
		int lx = rand() % _width / 2;
		int ly = rand() % _height / 2;
	
		/* give asteroid random velocity */
		float vx = (float) (rand() % 500) / 1000;
		float vy = (float) (rand() % 500) / 1000;
		
		float degrees =  (float) (rand() %  100 + 1000) / 1000;	
		
		/* 50% chance the sign of the variable will be switched to negative */
		if (sign_x >= 50) {
			
			vx = -vx;
			lx = -lx;
			degrees = -degrees;
		}
		
		/* 50% chance the sign of the variable will be switched to negative */
		if (sign_y >= 50) {
			
			vy = -vy;
			ly = -ly;
		}
	
		/* firest 3 asteroids are alive */
		if (i <  3) {
			
			asteroids[i].alive = 1;
		
		} else {
			
			asteroids[i].alive = 0;
		}

		asteroids[i].size = LARGE;
		asteroids[i].hit_radius = 35;
		asteroids[i].rotation = degrees;
		asteroids[i].location.x = lx;
		asteroids[i].location.y = ly;
		asteroids[i].velocity.x = vx;
		asteroids[i].velocity.y = vy;
		asteroids[i].obj_vert[0].x = .0;
		asteroids[i].obj_vert[0].y = .4;
		asteroids[i].obj_vert[1].x = .2;
		asteroids[i].obj_vert[1].y = .3;
		asteroids[i].obj_vert[2].x = .2;
		asteroids[i].obj_vert[2].y = .1;
		asteroids[i].obj_vert[3].x = .4;
		asteroids[i].obj_vert[3].y = .0;
		asteroids[i].obj_vert[4].x = .3;
		asteroids[i].obj_vert[4].y = -.2;
		asteroids[i].obj_vert[5].x = .1;
		asteroids[i].obj_vert[5].y = -.2;
		asteroids[i].obj_vert[6].x = .0;
		asteroids[i].obj_vert[6].y = -.3;
		asteroids[i].obj_vert[7].x = -.2;
		asteroids[i].obj_vert[7].y = -.2;
		asteroids[i].obj_vert[8].x = -.4;
		asteroids[i].obj_vert[8].y = 0;
		asteroids[i].obj_vert[9].x = -.3;
		asteroids[i].obj_vert[9].y = .3;
		
		for (j = 0; j < VERTS; j++) {
			
			/* coverts verts from obj space to world space and traslate world space to screen space */
			multiply_vector(&asteroids[i].obj_vert[j], 88);
			add_vector(&asteroids[i].world_vert[j], &asteroids[i].obj_vert[j]);
			add_vector(&asteroids[i].world_vert[j], &translation);
		}
	}
}

void update_asteroids(asteroid_t asteroids[], int size) {

	int i = 0; 
	int j = 0; 
	vector2d_t translation = {_width / 2, _height / 2};
	
	for (i = 0; i < size; i++) {
		
		/* updates each asteroids location based off its velicity vector */
		add_vector(&asteroids[i].location, &asteroids[i].velocity);
		/* update each vert of the asteroid to reflect the changes made to the asteroids location vector
		  and rotation amount, then translate the new vert location to screen space */
		for (j = 0; j < VERTS; j++) {
			add_vector_new(&asteroids[i].obj_vert[j], &asteroids[i].location,&(asteroids[i].world_vert[j]));
			add_vector(&asteroids[i].world_vert[j], &translation);
			rotate_vector(&asteroids[i].obj_vert[j], asteroids[i].rotation);
		}
	}
}

void draw_asteroids(gpx_t *g, asteroid_t asteroids[], int size) {
	for (int i = 0; i < size; i++) 
		if (asteroids[i].alive) {
            /* draw asteroid */
            for (int j=1;j<10;j++)
                gpx_draw_line(g,
                    asteroids[i].world_vert[j-1].x, asteroids[i].world_vert[j-1].y,
                    asteroids[i].world_vert[j].x, asteroids[i].world_vert[j].y);
            /* ...from last to first line */
            gpx_draw_line(g,
                asteroids[i].world_vert[9].x, asteroids[i].world_vert[9].y,
                asteroids[i].world_vert[0].x, asteroids[i].world_vert[0].y);
        }
}

int shrink_asteroid(asteroid_t* a, int size) {

	a->obj_vert[0].x = .0;
	a->obj_vert[0].y = .4;
	a->obj_vert[1].x = .2;
	a->obj_vert[1].y = .3;
	a->obj_vert[2].x = .2;
	a->obj_vert[2].y = .1;
	a->obj_vert[3].x = .4;
	a->obj_vert[3].y = .0;
	a->obj_vert[4].x = .3;
	a->obj_vert[4].y = -.2;
	a->obj_vert[5].x = .1;
	a->obj_vert[5].y = -.2;
	a->obj_vert[6].x = .0;
	a->obj_vert[6].y = -.3;
	a->obj_vert[7].x = -.2;
	a->obj_vert[7].y = -.2;
	a->obj_vert[8].x = -.4;
	a->obj_vert[8].y = 0;
	a->obj_vert[9].x = -.3;
	a->obj_vert[9].y = .3;
	
	int i = 0;

	for (i = 0; i < VERTS; i++) 
		multiply_vector(&a->obj_vert[i], 88);

	if (size == LARGE) {
			
		/* shrink asteroid */
		for (i = 0; i < VERTS; i++)
			divide_vector(&a->obj_vert[i], 2);
		
		a->size = MEDIUM;
		
		return 0;
	}
	
	if (size == MEDIUM) {
		
		/* shrink asteroid */
		for (i = 0; i < VERTS; i++)
			divide_vector(&a->obj_vert[i], 4);
		
		a->size = SMALL;
		
		return 0;
	}
	
	if (size == SMALL) {
		
		/* shrink asteroid */
		for (i = 0; i < VERTS; i++)
			divide_vector(&a->obj_vert[i], 8);

		return 0;
	}

	return 1;
}

void spawn_asteroids(asteroid_t a[], int length, int size, vector2d_t* v) {

	int i = 0;
	int count = 0;

	for (i = 0; i < length; i++) {

		if(a[i].alive == 0) {
		
			if (count == 3) {
				
				break;
			}

			memcpy(&(a[i].location), v, sizeof(vector2d_t));
			a[i].hit_radius /= 2;
			a[i].alive = 1;
			count++;		
			shrink_asteroid(&a[i], size);
		}
	}
}

void bounds_asteroids(asteroid_t asteroids[], int size) {

	int i = 0;

	for (i = 0 ; i < size; i++) {
		
		if (asteroids[i].location.x < -_width / 2) {
			
			asteroids[i].location.x = _width / 2;
		}
	
		if (asteroids[i].location.x > _width / 2) {
			
			asteroids[i].location.x = -_width / 2;
		}
		
		if (asteroids[i].location.y < -_height / 2) {
			
			asteroids[i].location.y = _height / 2;
		}
	
		if (asteroids[i].location.y > _height / 2) {
			
			asteroids[i].location.y = -_height / 2;
		}
	}
}


int collision_asteroids(asteroid_t asteroids[], int size, vector2d_t* v, float radius) {


	int i = 0;
	

	for (i = 0; i < size; i++) {
		
		/* only check for collions for asteroids that are shown onscreen */
		if (asteroids[i].alive == 1) {
			
			float sum = asteroids[i].hit_radius + radius;
			float a = pow(asteroids[i].location.x - v->x, 2);
			float b = pow(asteroids[i].location.y - v->y, 2);
			float distance = sqrt(a + b);
			
			if (distance < sum) {
				
				return i;
			}
		}
	}

	return -1;
}

#include "vector.h"

#define PI 3.141592

#ifndef __SDCC
#define float double
#endif

void add_vector(vector2d_t *a, vector2d_t *b)
{
    a->x += b->x;
    a->y += b->y;
}

vector2d_t *add_vector_new(vector2d_t *a, vector2d_t *b, vector2d_t *result)
{
    result->x=a->x + b->x;
    result->y=a->y + b->y;
    return result;
}

void multiply_vector(vector2d_t *v, float n)
{
    v->x *= n;
    v->y *= n;
}

void divide_vector(vector2d_t *v, float n)
{
    v->x /= n;
    v->y /= n;
}

float magnitude_vector(vector2d_t *v)
{

    float c2 = pow(v->x, 2) + pow(v->y, 2);

    return sqrt(c2);
}

void normalise_vector(vector2d_t *v)
{

    float mag = magnitude_vector(v);

    divide_vector(v, mag);
}

void limit_vector(vector2d_t *v, float limit)
{

    float mag = magnitude_vector(v);

    if (mag > limit)
    {

        float ratio = limit / mag;
        v->x *= ratio;
        v->y *= ratio;
    }
}

void rotate_vector(vector2d_t *v, float degrees)
{

    /* calculate radians */
    float angle = degrees * PI / 180;
    float sine = sin(angle);
    float cosine = cos(angle);

    /* rotation matix */
    float matrix[2][2] = {{cosine, -sine}, {sine, cosine}};

    float x = v->x;
    float y = v->y;

    v->x = matrix[0][0] * x + matrix[0][1] * y;
    v->y = matrix[1][0] * x + matrix[1][1] * y;
}

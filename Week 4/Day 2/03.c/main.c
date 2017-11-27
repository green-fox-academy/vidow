#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} point_t;


point_t result(int x, int y);
float distance(point_t p1, point_t p2);

// TODO:
// Create a function the constructs a point
// It should take it's x and y coordinate as parameter

// TODO:
// Create a function that takes 2 Points as a pointer and returns the distance between them



int main()
{
    point_t coord1 = result(10, 10);
    point_t coord2 = result(9, 9);

    float d = distance(coord1, coord2);

    printf("%.2f", d);

    return 0;
}

point_t result(int x, int y)
{
    point_t p;
    p.x = x;
    p.y = y;

    return p;
}

float distance(point_t p1, point_t p2)
{
    return sqrt(pow((p2.x - p1.x),2) + ((p2.y - p1.y),2));
}

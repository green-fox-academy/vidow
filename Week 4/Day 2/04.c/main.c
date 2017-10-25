#include <stdio.h>

struct rectangular_cuboid {
    double l;
    double w;
    double h;
}cubo;

int GetSurface(rectangular_cuboid);
int GetVolume(struct rectangular_cuboid cubo);

// TODO:
// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface

// TODO:
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

int main()
{
    struct rectangular_cuboid cubo = {10, 11, 12};

    int result_surface = GetSurface(cubo);

    printf("Surface: %d\n", result_surface);

    int result_volume = GetVolume(cubo);

    printf("Volume: %d\n", result_volume);

    return 0;
}

int GetSurface(struct rectangular_cuboid cubo)
{

    return (2 * (cubo.l * cubo.w + cubo.w * cubo.h + cubo.l * cubo.h));

}

int GetVolume(struct rectangular_cuboid cubo)
{
    return cubo.l * cubo.w * cubo.h;
}

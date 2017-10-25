#include <stdio.h>
#include <stdint.h>
#include <string.h>

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
    char VGA[50];
};

int main() {

    struct Computer PC = {3.2, 8, 32, "Radeon R8"};

    PC.bits = 64;
    PC.ram_size_GB = 16;
//    PC.VGA[50] = "GeForce 1080i";
    strcpy(PC.VGA, "GeForce 1080i"); //In case of changing a string, string copy is needed.

    //TODO: Change the bits to 64

    //TODO: print out the structure members

    printf("CPU speed in GHZ: %.2f\nRam size in GB: %d\nArchitechture type: %d\nVGA: %s",  PC.cpu_speed_GHz, PC.ram_size_GB, PC.bits, PC.VGA);

    return 0;
}

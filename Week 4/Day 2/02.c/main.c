#include <stdio.h>

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  enum CarType type;
  double km;
  double gas;
};

void print_car(struct Car vehicle)
{
    if (vehicle.type != TESLA) {

        printf("Gas: %.2f\n", vehicle.gas);
    }

    printf("Km: %.2f\n", vehicle.km);
}

// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main() {

    struct Car Car_1 = {VOLVO, 350, 8};
    struct Car Car_2 = {TOYOTA, 400, 6};
    struct Car Car_3 = {LAND_ROVER, 300, 10};
    struct Car Car_4 = {TESLA, 200, 0};

    print_car(Car_1);

  return 0;
}


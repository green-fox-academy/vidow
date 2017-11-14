#include <iostream>
#include <string>
#include "oop_06.h"

using namespace std;

int main() {
    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it has run
    // The km and the type property should be a parameter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it

    Car oc("Mazda", 1000000);
    cout << oc.run() << endl;

  return 0;
}

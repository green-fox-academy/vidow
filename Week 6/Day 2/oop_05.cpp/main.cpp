#include <iostream>
#include <string>
#include "oop_05.h"

using namespace std;

int main() {
    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

    Circle co(10);
    cout << "We have a circle with a given radius of " << co.get_radius() << "." << endl;
    cout << "It's circumference is " << co.get_circumference();
    cout << " and it's area is " << co.get_area() << "." << endl;

  return 0;
}

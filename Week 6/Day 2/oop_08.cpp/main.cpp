#include <iostream>
#include <string>
#include <vector>
#include "oop_08.h"

using namespace std;


int main() {
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

    Student soApple;

    soApple.add_grade(3);
    soApple.add_grade(4);
    soApple.add_grade(4);
    soApple.add_grade(5);
    soApple.add_grade(5);

    cout << soApple.get_average() << endl;

  return 0;
}

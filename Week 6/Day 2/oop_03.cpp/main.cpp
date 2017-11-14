#include <iostream>
#include <string>
#include "oop_03.h"

using namespace std;

int main() {
  // Create a method on the Student class called "greet" that returns a string
  // like: "Hello my name is: <student name>"

    Student so("John", 21);
    so.greet();

  return 0;
}

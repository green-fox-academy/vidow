#include <iostream>
#include <string>
#include "oop_02.h"

using namespace std;

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21 with it's constructor

    Student so("John", 21);
    so.printer();

  return 0;
}

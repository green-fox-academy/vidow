#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
  // Create a new instance of the Student class and set it's name to "John" and
  // it's age to 21

    Student so;
    so.name = "John";
    so.age = 21;

    cout << so.name << " is " << so.age << " years old." << endl;

  return 0;
}

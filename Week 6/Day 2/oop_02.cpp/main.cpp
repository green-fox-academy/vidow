#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
        Student(unsigned int age, string name){
        this->age = age;
        this->name = name;
    }
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
    void printer(){
        cout << name << " is " << age << " years old." << endl;
    }
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21 with it's constructor

    Student so("John", 21);
    so.printer();

  return 0;
}

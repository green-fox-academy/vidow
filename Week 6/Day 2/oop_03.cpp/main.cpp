#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
        Student(unsigned int age, string name){
        this->age = age;
        this->name = name;
        }
        ~Student(){
        cout << "End of story" << endl;
        }
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
    void greet(){
        this->age = age;
        this->name = name;

        cout << "Hello my name is: <" << name << ">" << endl;
    }
};

int main() {
  // Create a method on the Student class called "greet" that returns a string
  // like: "Hello my name is: <student name>"

    Student so("John", 21);
    so.greet();

  return 0;
}

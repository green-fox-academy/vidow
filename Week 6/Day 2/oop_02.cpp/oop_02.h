#ifndef OOP_02_H
#define OOP_02_H

#include <iostream>
#include <string>
#include "oop_02.h"

using namespace std;

class Student {
public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age);
    ~Student();
    void printer(){
        cout << name << " is " << age << " years old." << endl;
    }
};
#endif // OOP_02_H

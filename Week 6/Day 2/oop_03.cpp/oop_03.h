#ifndef OOP_03_H
#define OOP_03_H

#include <iostream>
#include <string>
#include "oop_03.h"

using namespace std;

class Student {
public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age);
    ~Student();
    void greet(){
        cout << "Hello my name is: <" << name << ">" << endl;
    }
};

#endif // OOP_03_H

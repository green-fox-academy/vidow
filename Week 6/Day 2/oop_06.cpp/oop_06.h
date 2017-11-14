#ifndef OOP_06_H
#define OOP_06_H

#include <iostream>
#include <string>
#include "oop_06.h"

using namespace std;

class Car{
private:
    string type;
    unsigned int km;
public:
    Car(string type, unsigned int km);
    ~Car();
    unsigned int run(){
        unsigned int number = 5;
        km = km * number;
        return this->km;
    }
};

#endif // OOP_06_H

#ifndef OOP_05_H
#define OOP_05_H

#include <iostream>
#include <string>
#include "oop_05.h"

using namespace std;

class Circle{
private:
    unsigned int radius;
    float circumference;
    float area;
public:
    Circle(unsigned int radius);
    ~Circle();
    unsigned int get_radius(){
        return this->radius;
    }
    float get_circumference(){
        circumference = 2 * 3.14 * radius;
        return this->circumference;
    }
    float get_area(){
        area = 3.14 * (radius * radius);
        return this->area;
    }
};

#endif // OOP_05_H

#ifndef OOP_04_H
#define OOP_04_H

#include <iostream>
#include <string>
#include "oop_04.h"

using namespace std;

class House{
private:
    string address;
    unsigned int area;
    unsigned int price;
public:
    House(string address, unsigned int area);
    ~House();
    unsigned int get_price() {
        price = 400 * area;
        return this->price;
    }
};

#endif // OOP_04_H

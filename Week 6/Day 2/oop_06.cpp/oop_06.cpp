#include "oop_06.h"

Car::Car(string type, unsigned int km)
{
    this->type = type;
    this->km = km;
}
Car::~Car()
{
    cout << "Car--" << endl;
}

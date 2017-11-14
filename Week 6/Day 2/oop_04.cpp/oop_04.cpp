#include "oop_04.h"

House::House(string address, unsigned int area)
{
    this->address = address;
    this->area = area;
}
House::~House()
{
    cout << "End of story" << endl;
}

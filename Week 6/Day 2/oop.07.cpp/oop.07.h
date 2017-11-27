#ifndef OOP_07_H
#define OOP_07_H

#include <iostream>
#include <string>
#include "oop.07.h"

using namespace std;

class Pirate{
private:
    unsigned int counter;
public:
    Pirate(unsigned int counter);
    ~Pirate();
    unsigned int get_counter(){
        return this->counter;
    }
    void drink_rum(){
        counter++;
    }
    void hows_goin_mate(){
        if (counter >= 5) {
            cout << "Arrrr!" << endl;
        }
        else{
            cout << "Nothin'" << endl;
        }
    }
    unsigned int counter_inc(){
        counter++;
        return this->counter;
    }
};

#endif // OOP_07_H

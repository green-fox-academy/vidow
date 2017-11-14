#include <iostream>
#include <string>
#include "oop.07.h"

using namespace std;

int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

    Pirate po(0);

    po.drink_rum();
    po.drink_rum();
    po.drink_rum();
    po.drink_rum();
    po.drink_rum();

    po.hows_goin_mate();

  return 0;
}

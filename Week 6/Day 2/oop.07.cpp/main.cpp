#include <iostream>
#include <string>

using namespace std;

class Pirate{
private:
    unsigned int counter;
public:
    Pirate(unsigned int counter){
        this->counter = counter;
    }
    unsigned int get_counter(){
        return this->counter;
    }
    void drink_rum(){
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

int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

    Pirate po(0);

    while (po.get_counter() < 3){
        po.drink_rum();
        po.counter_inc();
    }
    po.hows_goin_mate();

  return 0;
}

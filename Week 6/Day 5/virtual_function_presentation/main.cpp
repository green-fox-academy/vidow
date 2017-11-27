#include <iostream>
using namespace std;

class Weapon
{
    public:
       void loadFeatures(){
           cout << "Loading weapon features.\n";
        }
};

class Sniper_rifle : public Weapon
{
    public:
       void loadFeatures(){
           cout << "Loading Sniper rifle features.\n";
        }
};

class Laser_gun : public Weapon
{
    public:
       void loadFeatures(){
           cout << "Loading Laser gun features.\n";
        }
};

int main()
{
    Weapon *w = new Weapon;
    Sniper_rifle *sr = new Sniper_rifle;
    Laser_gun *lg = new Laser_gun;

    w->loadFeatures();
    sr->loadFeatures();
    lg->loadFeatures();

    return 0;
}

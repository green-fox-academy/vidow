#include <iostream>
#include <string>

using namespace std;

class Circle {
    private:
        unsigned int radius;
        float circumference;
        float area;
    public:
        Circle(unsigned int radius){
            this->radius = radius;
        }
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

int main() {
    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

    Circle co(10);
    cout << "We have a circle with a give radius of " << co.get_radius() << "." << endl;
    cout << "It's circumference is " << co.get_circumference();
    cout << " and it's area is " << co.get_area() << "." << endl;

  return 0;
}

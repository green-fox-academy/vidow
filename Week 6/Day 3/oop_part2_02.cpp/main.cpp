// Continue the Shape exercise!
// Create getter methods for each values
// (for example: in a Triangle class you should be able to
// get: Height, Base and Area)

#include <iostream>
#include <vector>

using namespace std;

class Shape{
 public:
    virtual float calc_area() = 0;
    virtual void print_data() = 0;
};
class Circle: public Shape{
 private:
     float area;
     float radius;
 public:
     Circle(float radius){
         this->radius = radius;
     }
     float calc_area(){
         return this->area = 3.14 * (radius * radius);
     }
     void print_data(){
         cout << "If a circle's radius is " << radius << " then the area is " << endl;
     }
};
class Triangle: public Shape{
 private:
     float area;
     float h;
     float b;
 public:
     Triangle(float h, float b){
         this->h = h;
         this->b = b;
     }
     float calc_area(){
         return this->area = 0.5 * h * b;
     }
     void print_data(){
        cout << "If a triangle's h is " << h << " and the base is " << b << " then the area is " << endl;
     }
};

int main()
{
    Circle co(20.1);
    co.print_data();
    cout << co.calc_area() << endl;

    Triangle to(20, 10.1);

    to.print_data();
    cout << to.calc_area() << endl;

    return 0;
}

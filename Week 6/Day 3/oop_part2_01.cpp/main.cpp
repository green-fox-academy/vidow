#include <iostream>
#include <vector>

using namespace std;

// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private field)

class Shape{
 public:
    virtual float calc_area() = 0;
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
};

int main()
{
    Circle co(20);
    cout << co.calc_area() << endl;

    Triangle to(20, 10);
    cout << to.calc_area() << endl;

    return 0;
}

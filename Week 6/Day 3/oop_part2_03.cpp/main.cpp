// Still the shape exercise!
// Create public method called how_much_to_paint()
// which should get the area and the price of the paint as parameters
// It should return the costs of the painting

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
     float paint_price;
     float paint_cost;
 public:
     Circle(float radius, float paint_price){
         this->radius = radius;
         this->paint_price = paint_price;
     }
     float calc_area(){
         return this->area = 3.14 * (radius * radius);
     }
     void print_data(){
         cout << "If a circle's radius is " << radius << " then the area is " << calc_area() << endl;
     }
     float how_much_to_paint(){
        return this->paint_cost = calc_area() * paint_price;
     }
};
class Triangle: public Shape{
 private:
     float area;
     float h;
     float b;
     float paint_price;
     float paint_cost;
//     float paint_price;
//     float paint_cost;
 public:
     Triangle(float h, float b, float paint_price){
         this->h = h;
         this->b = b;
         this->paint_price = paint_price;
     }
     float calc_area(){
         return this->area = 0.5 * h * b;
     }
     void print_data(){
        cout << "If a triangle's h is " << h << " and the base is " << b << " then the area is " << calc_area() << endl;
     }
     float how_much_to_paint(){
        return this->paint_cost = calc_area() * paint_price;
     }
};

int main()
{
    Circle co(12, 200);

    cout << "To paint a circle which has area of " << co.calc_area() << " we need " << co.how_much_to_paint() << " money." << endl;

    cout << endl;

    Triangle to(20, 10.1, 200);

    cout << "To paint a triangle which has area of " << to.calc_area() << " we need " << to.how_much_to_paint() << " money." << endl;


    return 0;
}

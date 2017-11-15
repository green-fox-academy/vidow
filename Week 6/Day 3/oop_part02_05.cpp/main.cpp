#include <iostream>
#include <vector>

using namespace std;

// Create a Car class.
// Create the following protected variables : age, kms_runed, manufacturer, number_of_seats
// use proper variable types.
// Implement a method which has one parameter, and increases the kms_runed variable by its parameter value.
// Implement a method which can add a person to a car, if the number of persons in the car reached
// the value of number of seats in the car it should tell you that 'The car is full!' or something like that.
// Inherit at least two car models and try out the methods you have created.

class Car{
 protected:
     unsigned int age;
     unsigned int kms_ran;
     string manufacturer;
     unsigned int number_of_seats;
     unsigned int add_km;
     unsigned int person;
 public:
    Car(unsigned int add_km, unsigned int person){
        this->add_km = add_km;
        this->kms_ran = 500;
        this->number_of_seats = 4;
        this->person = person;
    }
    virtual unsigned int km_adder(){
        return this->kms_ran = kms_ran + add_km;
    }
    virtual unsigned int person_adder(){
        person++;
        if (person >= number_of_seats) {
            cout << "The car is full, wait for another ride!" << endl;
        }
    }
};
class Tesla: public Car{
 public:
    Tesla(unsigned int add_km, unsigned int person):Car(add_km, person){
        this->add_km = add_km;
        this->kms_ran = 2000;
        this->number_of_seats = 5;
        this->person = person;
    }
     unsigned int km_adder(){
        return this->kms_ran = kms_ran + add_km;
    }
    unsigned int person_adder(){
        person++;
        if (person >= number_of_seats) {
            cout << "The car is full, wait for another ride!";
        }
    }
};
class Rimac: public Car{

public:
    Rimac(unsigned int add_km, unsigned int person):Car(add_km, person){
        this->add_km = add_km;
        this->kms_ran = 1990;
        this->number_of_seats = 3;
        this->person = person;
    }
     unsigned int km_adder(){
        return this->kms_ran = kms_ran + add_km;
    }
    unsigned int person_adder(){
        person++;
        if (person >= number_of_seats) {
            cout << "The car is full, wait for another ride!";
        }
    }
};

int main()
{
    Car c(40, 0);

    cout << c.km_adder() << endl;

    c.person_adder();
    c.person_adder();
    c.person_adder();

    Tesla t(100, 0);

    cout << t.km_adder() << endl;

    t.person_adder();
    t.person_adder();
    t.person_adder();

    Rimac r(150, 0);

    cout << r.km_adder() << endl;

    r.person_adder();
    r.person_adder();
    r.person_adder();

    return 0;
}

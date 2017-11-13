#include <iostream>
#include <string>

using namespace std;

// store your personal data in Variables
// string name, int age, int slice_of_pizza_you_can_eat
// allocate memory dynamically for these variables
// create a sentence using these variables
// free the allocated memory

int main() {

    int *age;
    string *name;
    int *slice_of_pizza_you_can_eat;

    age = new int;
    *age = 31;

    name = new string;
    *name = "Norbert Szucs";

    slice_of_pizza_you_can_eat = new int;
    *slice_of_pizza_you_can_eat = 1000;

    cout << *name << " who is " << *age << " years old can eat " << *slice_of_pizza_you_can_eat << " slices of pizza.";

    delete age;
    delete name;
    delete slice_of_pizza_you_can_eat;

  return 0;
}

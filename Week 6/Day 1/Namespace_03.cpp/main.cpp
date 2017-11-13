#include <iostream>
using namespace std;


// Use your costume namespace from the last exercise
// Create a function, which takes the age as a parameter
// and returns the year when you were born

namespace Person{

    string MyName = "Norbert Szucs";
    int MyAge = 31;
    int MyFavNum = 27;
}

int BirthYear(int MyAge);

int main()
{
    cout << BirthYear(Person::MyAge) << endl;

    return 0;
}

int BirthYear(int MyAge)
{

    return 2017 - MyAge;

}

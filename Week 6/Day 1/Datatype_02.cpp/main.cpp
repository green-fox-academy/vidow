#include <iostream>

using namespace std;

// Define several things as a variable then print their values
// Your name as a string
// Your age as an integer
// Your height in meters as a double
// Whether you are married or not as a boolean

int main()
{
    string MyName = "Norbert Szucs";
    int MyAge = 31;
    double MyHeight = 1.77;
    bool MyMaritalStatus = false;

    cout << "My name is " << MyName << endl;
    cout << "My age is " << MyAge << endl;
    cout << "My height is " << MyHeight << " m" << endl;

    if (MyMaritalStatus) {
        cout << "I am married" << endl;
    }
    else{
        cout << "I'm not married" << endl;
    }

    return 0;
}

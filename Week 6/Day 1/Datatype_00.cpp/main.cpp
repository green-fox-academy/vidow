#include <iostream>
#include <string>

using namespace std;

// Write a program that prints a few details to the terminal window about you
// It should print each detail to a new line.
//  - Your name
//  - Your age
//  - Do you like coffee? (as a boolen variable)
//
//  Example output:
//  John Doe
//  31
//  Likes coffee: true

int main()
{

    string MyName = "Norbert Szucs";
    int MyAge = 31;
    bool Coffee = false;

    cout << MyName << endl;
    cout << MyAge << endl;

    if (Coffee) {
        cout << "Likes coffee: true" << endl;
    }
    else{
        cout << "Likes coffee: false" << endl;
    }

    return 0;
}

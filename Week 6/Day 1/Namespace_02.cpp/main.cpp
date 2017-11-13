#include <iostream>
#include <string>

using namespace std;

namespace Person{

    string MyName = "Norbert Szucs";
    int MyAge = 31;
    int MyFavNum = 27;
}

// Create your own namespace, called Person
// store your name as a string
// your age as an integer
// and your favorite number as an integer
// write them out in main()

int main()
{
    cout << Person::MyName << endl;
    cout << Person::MyAge << endl;
    cout << Person::MyFavNum << endl;

    return 0;
}

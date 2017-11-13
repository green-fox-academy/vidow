#include <iostream>
using namespace std;

// Create your own namespace, called Mark
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// Create your own namespace, called Maria
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// create a function that can add the two age, and returns it

namespace Mark{

    string MyName = "Mark";
    int MyAge = 20;
    int MyFavNum = 2;
}

namespace Maria{

    string MyName = "Maria";
    int MyAge = 30;
    int MyFavNum = 21;
}

int TwoAges(int MyAge_1, int MyAge_2);


int main()
{

    cout << TwoAges(Mark::MyAge, Maria::MyAge) <<endl;

    return 0;
}

int TwoAges(int MyAge_1, int MyAge_2)
{

    return MyAge_1 + MyAge_2;

}

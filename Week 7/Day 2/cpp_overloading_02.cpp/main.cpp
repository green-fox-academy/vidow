#include <iostream>
using namespace std;

// Create 3 functions: each should take respectively 2, 3 and 4 strings.
// Each should return a string that contains all the input string concatenated.
// (Combined into one in a linear order.)
// Write code that showcases how this works and prints out the result of the function.

string RndString(string one, string two){
    return one + two;
}

string RndString(string one, string two, string three){
    return one + two + three;
}

string RndString(string one, string two, string three, string four){
    return one + two + three + four;
}


int main() {

    cout << RndString("one ", "two ") << endl;
    cout << RndString("one ", "two ", "three ") << endl;
    cout << RndString("one ", "two ", "three ", "four ") << endl;
	return 0;
}

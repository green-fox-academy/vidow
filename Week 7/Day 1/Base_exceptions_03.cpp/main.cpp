#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <stdexcept>
#include <exception>

using namespace std;

// Write a try - catch block.
// Throws a bulit-in exception in the try block
// Catch it in the catch block and write it out.
// Don't forget includes

float _div(int _a, int _b){
    if (_b == 0){
        throw exception();
    }
    return ((float)_a / (float)_b);
}

int main() {

    int a = 0;
    cin >> a;
    int b = 0;
    cin >> b;

    try {
        cout << _div(a, b) << endl;
    }
    catch(exception &err){
            cout << err.what() << endl;
    }

	return 0;
}

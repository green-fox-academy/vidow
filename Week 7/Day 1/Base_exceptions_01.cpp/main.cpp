#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

float div(int _a, int _b) {
    if (_b == 0){
        throw 1;
    }
    return _a / _b;
}

int main() {

    int a = 100;
    int b = 0;

    try {
        cout << div(a, b) << endl;
    }
    catch (int &c) {
        cerr << c << endl;
    }

    return 0;
}

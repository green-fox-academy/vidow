#include <iostream>
#include <windows.h>
#include <stdexcept>
using namespace std;

// Create a function which throws an char
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

float _div(int _a, int _b){
    if(_b == 0) {
        throw runtime_error("c");
    }
    return ((float)_a / (float)_b);
}

int main() {

    int a = 0;
    int b = 0;

    cin >> a;
    cin >> b;

    try{
        cout << _div(a, b);
    }
    catch(runtime_error &err){
        cout << err.what();
    }

	return 0;
}

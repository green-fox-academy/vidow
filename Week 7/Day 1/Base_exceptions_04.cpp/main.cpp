#include <iostream>
using namespace std;

// Create a function which throws an integer
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

float _div(int _a, int _b){
    if(_b == 0) {
        throw 111;
    }
    return ((float)_a / (float)_b);
}


int main() {

    int a = 10;
    int b = 0;

    try{
        cout << _div(a, b);
    }
    catch(int c){
        cout << c;
    }

	return 0;
}

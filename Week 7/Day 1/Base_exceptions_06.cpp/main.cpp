#include <iostream>
using namespace std;

// Create a function which throws a bulit-in exception
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

float _div(int _a, int _b){
    if (_b == 0){
        throw exception();
    }
    return ((float)_a / (float)_b);
}

int main() {

    int a = 20;
    int b = 0;

    try {
        cout << _div(a, b) << endl;
    }
    catch(exception &err){
            cout << err.what() << endl;
    }

	return 0;
}

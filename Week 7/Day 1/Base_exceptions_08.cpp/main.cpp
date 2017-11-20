#include <iostream>
#include <windows.h>
#include <stdexcept>
using namespace std;

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exception
 */

int get_fibonacci_number(){

    try{
    int n = 0;
    int c = 0;
    int a = 0;
    int b = 1;
    cout << "Enter a number: ";
    cin >> n;

        if (n < 0){
            throw runtime_error("Negative numbers are invalid parameters");
        } else {

        cout << "Fibo series: " << a << ", " << b << ", ";

        c = a + b;

            while(c <= n){
                cout << c << ", ";
                a = b;
                b = c;
                c = a + b;
            }
        }
    }
        catch(runtime_error &err){
            cout << err.what();
        }

}


int main() {

    get_fibonacci_number();


	return 0;
}

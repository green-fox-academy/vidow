#include <iostream>
#include <windows.h>
#include <stdexcept>
using namespace std;

/**
 * Create a function that prints out the fist "N" positive odd numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   1, 3, 5, 7, 9
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */

 int PosOddPrinter(){

     try{

    int number = 0;

    cin >> number;

    if (number < 0){
        throw runtime_error("Negative numbers are invalid parameters.");
    }
        else{

            for (int i = 1; i <= number * 2; i++){

                if(i % 2 != 0){

                cout << i << ", ";
                }
//                for (int i = 0, k = 0; k <= number; i++){
//                    if(i % 2 != 0){
//                        cout << i << ", ";
//                        k++;
//                    }
            }
        }
    }
    catch(runtime_error &err){
        cout << err.what() << endl;
    }
}

int main() {

    PosOddPrinter();

  return 0;
}

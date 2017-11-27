#include <iostream>
#include <windows.h>
#include <stdexcept>
using namespace std;
//Try to run the following code!
/*
void WrongLength(int a[]){
    if((sizeof(a) / sizeof(a[0])) < 6){
        throw 1;
    }
}
*/
int main () {

    try{
    int int_array[5] = {1, 2, 3, 4, 5};

    cout << int_array[200] << endl;

        if (sizeof(int_array) / sizeof(int_array[0]) < 6){
        throw runtime_error("Array is smaller than the requested member of that array.");
        }
        else if (sizeof(int_array) / sizeof(int_array[0]) < sizeof(int_array)){
        throw runtime_error("Array size is just perfetto.");
        }
    }
    catch(runtime_error &err){
        cout << err.what();
    }

    return 0;
}

//The program should compile but crash!
//Create a solution for this problem using try-catch block!

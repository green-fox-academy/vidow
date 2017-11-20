#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segment in a new try-catch block.

const char *Mr_Thrower(){
srand(time(NULL));

    try{
    int number = 6;
    const char *sentence[6] = {"What", "a", "pleasant", "surprise", "this", "is."};

//    number = rand() % 5;

        if (number > 5){
        throw number - 5;
        }
        else if (number < 0){
            throw "It is a negative number.";
        }
        else{
            return sentence[number];
        }
    }
    catch(int &a){
        cout << a << endl;
    }
    catch(const char *b){
        cout << b << endl;
    }
}

int main(){


    cout << Mr_Thrower(); //If cout, return is working, but throws are not.
    Mr_Thrower(); //If without cout, throws are working, return is not.

    return 0;
}

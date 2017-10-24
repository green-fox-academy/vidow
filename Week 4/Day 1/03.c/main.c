#include <stdio.h>

int main() {
    int number = 1234;
    int* number_pointer = &number;
    //TODO:
    // update the value of number variable to 42 using the "number_pointer"

    *number_pointer = 42;
    //Printing out the value of number after modified "number_pointer" value to 42.
    printf("The value of number is %d.\n", *number_pointer);
    //Printing out the memory address of "number_pointer".
    printf("The value of number is %p.\n", &number_pointer);

    return 0;
}

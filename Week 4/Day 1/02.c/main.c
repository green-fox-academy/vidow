#include <stdio.h>

int main() {
    int number = 1234;
    int *number_pointer = &number;
    //TODO:
    // print the value of number using the "number_pointer"

    printf("The value of number is %d.\n", *number_pointer);

    return 0;
}

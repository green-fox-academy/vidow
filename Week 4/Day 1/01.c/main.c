#include <stdio.h>

int main() {
    int number = 1234;
    int *p_number;

    p_number = &number;
    //TODO:
    // print the memory address of the variable

    printf("Address option 1: %p and option 2: %x\n", &number, p_number);
    printf("Value option 1: %d and option 2: %d\n", number, *p_number);

    return 0;
}

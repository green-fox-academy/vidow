#include <stdio.h>

int main() {
    int high_number = 6655;
    int low_number = 2;
    int *temp1 = high_number;
    int *temp2 = low_number;

    int* hight_number_pointer = &low_number;
    int* low_number_pointer = &high_number;
    //TODO:
    // Please fix the problem and swap where the pointers point,
    // without using the "&" operator.

    hight_number_pointer = temp1;
    low_number_pointer = temp2;

    printf("High number is %d, low number is %d.\n", hight_number_pointer, low_number_pointer);


    return 0;
}

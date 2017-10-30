#include <stdio.h>
#include <stdlib.h>

/*
 * Create a function that takes an array of integers as an argument (a pointer) and it's length as an unsigned integer.
 * The function should sort the elements of the array in ascending order.
 *
 * Print it out before and after to be able to check whether it works as supposed.
 */

void sorting_array (int *numbers, unsigned int lenght);

int main()
{
    int numbers[5] = {1, 75, 23, 53, 44};
    unsigned int lenght = sizeof(numbers) / sizeof(0);
    unsigned int temp = 0;
        //To print out "numbers" array.
        for (int i = 0; i < lenght; i++) {

            printf("%d\n", numbers[i]);
        }

    printf("\n");

    sorting_array(numbers, lenght);

    return 0;
}
//Function to set number and bubble sort them.
void sorting_array(int *numbers, unsigned int lenght)
{
    int temp = 0;

    for (int i = 0; i < lenght; i++) {
        for (int j = 0; j < lenght - i - 1; j++) {
            //Bubble sorting starts,
            if (numbers[j] > numbers[j + 1]) {

                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
     for (int i = 0; i < lenght; i++) {

        printf("%d\n", numbers[i]);
    }
}

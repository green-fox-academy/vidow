#include <stdio.h>
#include <stdlib.h>

/*
 * Create an array of 12 integers. Fill it with random numbers.
 * Sort them in ascending order using bubble sort. -- Google it if You don't know it. (It's easy)
 * Print out the numbers before and after the sorting.
 */


int main()
{
    //Loaded array with 12 random numbers.
    int numbers[12] = {10, 5, 8, 18, 12, 19, 15, 33, 44, 17, 23, 56};
    int temp = 0; //Temp variable to store data later.
    int lenght = sizeof(numbers) / sizeof(0);
    //For loop to get the numbers in the numbers array.
    for (int i = 0; i < lenght; i++) {
        //Second for loop to recheck the numbers.
        for (int j = 0; j < lenght - 1; j++) {
            //Condition to start to check the value of numbers
            if (numbers[j] > numbers[j + 1]) {
                //Procedure to check the number in ascending order. For descending use "<" instead of ">" in if condition.
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    //Another loop to print out the numbers in ascending order.
    for (int i = 0; i < lenght; i++) {

        printf("%d\n", numbers[i]);
    }

    return 0;
}

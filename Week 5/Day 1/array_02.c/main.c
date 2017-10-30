#include <stdio.h>
#include <stdlib.h>

/*
 * Create an array of 12 integers. Fill it with random numbers.
 * Sort them in ascending order using bubble sort. -- Google it if You don't know it. (It's easy)
 * Print out the numbers before and after the sorting.
 */


int main()
{
    int numbers[12] = {10, 5, 8, 18, 12, 19, 15, 33, 44, 17, 23, 56};
    int temp = 0;
    int lenght = sizeof(numbers) / sizeof(0);

    for (int i = 0; i < lenght; i++) {

        for (int j = 0; j < lenght - 1; j++) {

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

    return 0;
}

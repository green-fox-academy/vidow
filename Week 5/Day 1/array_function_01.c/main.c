#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Create a function that takes an array as argument and it's length. Determine the right data types to do this.
 * This function should order the arguments in ascending order and return this in a new sorted array.
 *
 * Create a second function that takes 3 arguments. An array, it's length and a number it is searching for.
 * The function should return the index of the number when found or -1 if it's not part of the array.
 * IMPORTANT: this function expects a sorted array and uses the strategy we used when we play guess the number.
 *
 *
 * In the main function create an unsorted array filled with random numbers, Make it 50 long.
 * Try 2 scenarios:
 *    * In the first: You pick a random element in the unsorted array and check at which index it is after the array is sorted.
 *    * In the second: You pick a number You are sure is not in the array. Check whether the search function returns the right number.
 * Print out what You need to check these.
 */

int sorting_function(int *numbers1, int lenght);
int seeker(int *numbers1, int lenght, int joly);

int main()
{
srand(time(NULL));

    int numbers1[5] = {10, 25, 62, 6, 2};
    int lenght = sizeof(numbers1) / sizeof(0);
    int joly = 2;
    int random_numbers[50];
    int random_number = 0;
    int random_lenght = sizeof(random_numbers) / sizeof(0);
    int counter = 0;
    int counter_two = 0;

    printf("Random numbers from 1-99: \n");

    for (int i = 0; i < random_lenght; i++) {

        counter++;

        random_numbers[i] = 1 + rand() % 99;

        printf("%d %d\n", counter, random_numbers[i]);

    }

    printf("\n");

    random_number = 1;

    printf("You can find %d at", random_number);

    for (int i = 0; i < random_lenght; i++) {
        for (int j = 0; j < random_lenght - i - 1; j++) {

            if (random_numbers[j] > random_numbers[j + 1]) {

                int temp = random_numbers[j];
                random_numbers[j] = random_numbers[j + 1];
                random_numbers[j + 1] = temp;
            }
        }
    }

    printf(" line(s): ");

    for (int i = 0; i < random_lenght; i++) {

        if (random_numbers[i] == random_number) {
            printf(" %d ", i + 1);

        }
    }

    for (int i = 0; i < random_lenght; i++) {

      counter_two++;

      printf("\n%d %d", counter_two, random_numbers[i]);
    }

//sorting_function(numbers1, lenght);

//printf("\n");

//printf("%d\n", seeker(numbers1, lenght, joly));

    return 0;
}

int sorting_function(int *numbers1, int lenght)
{
    int numbers2[5];
    int temp = 0;

    for (int i = 0; i < lenght; i++) {

        printf("%d\n", numbers1[i]);
    }

    printf("\n");

    for (int i = 0; i < lenght; i++) {
        for (int j = 0; j < lenght - i - 1; j++) {

            if (numbers1[j] > numbers1[j + 1]) {

                temp = numbers1[j];
                numbers1[j] = numbers1[j + 1];
                numbers1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < lenght; i++) {

        numbers2[i] = numbers1[i];

        printf("%d\n", numbers2[i]);
    }

}

int seeker(int *numbers1, int lenght, int joly)
{

    int temp = 0;

    for (int i = 0; i < lenght; i++) {
        for (int j = 0; j < lenght - i - 1; j++) {

            if (numbers1[j] > numbers1[j + 1]) {

                temp = numbers1[j];
                numbers1[j] = numbers1[j + 1];
                numbers1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < lenght; i++) {

        if (numbers1[i] == joly) {
            return joly;
        }
    }

    return -1;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Create a function that takes an array of array of characters and returns an array of integers each representing the
 * length of the given character array in the first array.
 * Say your input is this: {"Good", "Morning", "Vietnam"}
 * Your output should be this: {4, 7, 7}.
 * HINT: strings are terminated with a special character: '\0'.
 * So, "Good" as an array of characters would look like this: {'G', 'o', 'o', 'd', '\0'}.
 *
 * In the main function create code that demonstrates that Your function works appropriately.
 */

int main()
{
    char williams[3][10] = {"Good", "Morning", "Vietnam"};
    strlen(williams);
    int a = strlen(williams);
    int result[50];
    int counter = 0;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 7; j++) {

                    counter++;

                printf("%c", williams[i][j]);
            }
        }




    return 0;
}

int len_function (char *williams, int *result)
{



}

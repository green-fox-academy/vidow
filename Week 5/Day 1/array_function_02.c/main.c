#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Create a function that takes two arrays of characters and a number.
 * It should replace the contents of the first array from the given index
 * with the contents of the second array.
 * The function should return a number which tells whether it was successful:
 *    * If all is right it should return 0.
 *    * If the index is out of bounds it should return -1.
 *    * If the inserted content would be longer than the receiving array it should return 1 and leave the array as it is.
 * IMPORTANT: Think about what kind of arguments You need to make this happen and craft the function accordingly.
 *
 * Write code in the main function to test all scenarios and write out the result You need to check whether this works.
 */

 int taker (char *array_one, char *array_two, int *number);

int main()
{
    char array_one[20] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    char array_two[20] = {'z', 'y', 'x', 'w', 'v', 'u', 't'};
    int number = 5;

    int length1 = strlen(array_one);
    int length2 = strlen(array_two);

    taker(array_one, array_two, number);

    return 0;
}

int taker (char *array_one, char *array_two, int *number)
{

    int length1 = strlen(array_one);
    int length2 = strlen(array_two);

    if (number > length1) {
        return -1;
    }
    if (length2 > length1) {
        return 1;
    }
    else{

        for (int i = number - 1; i < length1; i++) {

            array_one[i] = array_two[i];

            return 0;
        }
    }

    return 0;
}

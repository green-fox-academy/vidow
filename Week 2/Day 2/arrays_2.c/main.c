#include <stdio.h>

int main() {
    char char_array[] = {'a', 'b', 'c', 'd'};
    char char_array_the_same[] = "abcd";

	//TODO:
    // Print out the two arrays character-by-character

	//TODO:
    // What is the difference between the arrays?

    printf("The lenght of char_array is %d.\n", sizeof(char_array));
    printf("The lenght of char_array_the_same is %d.\n", sizeof(char_array_the_same));

    for (int i = 0; i < 4; i++){
        printf("\n%c\n", char_array[i]);
    }

    for (int j = 0; j < 5; j++){
        printf("\n%c\n", char_array_the_same[j]);
    }


    return 0;
}

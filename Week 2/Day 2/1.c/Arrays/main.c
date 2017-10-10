#include <stdio.h>

int main() {
    char my_name_array[14] = "Szucs Norbert";

 //       puts(my_name_array);

	//TODO:
    // Print out the array character-by-character

        for (int i = 0; i < 14; i++){
 //           for (int j = 0; j < i; j++)
            printf("%c\n", my_name_array[i]);
        }
    return 0;
}

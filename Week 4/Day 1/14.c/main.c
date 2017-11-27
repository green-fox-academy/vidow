#include <stdio.h>

void string_copy(char *dest, char *source)
{
    int temp = 0;
    int i = 0;

    for (i = 0; source[i] != '\0'; i++) {

        dest[i] = source[i];
    }
 /* While solution
    while (source[i] != '\0') {

        dest[i] = source[i];
        i++;
    }
*/
    dest[i] = '\0';

    printf("%s\n", dest);
}

int main()
{
    char my_string[] = "to be copied";
    char dest[50];

    string_copy(dest, my_string);

   //TODO: write a function, which copies a string to the 'dest' array, then print out in string format.

    return 0;
}

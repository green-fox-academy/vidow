#include <stdio.h>
#include <string.h>

void reverse_name(char *name, char *reversed_name)
{
    int i = 0;
    int j = 0;
    int temp[];

    for (i = 0; name[i] != ' '; i++) {

        temp[i] = name[i];
    }

    for (j = name[i]; name[j] != '\0'; j++) {

        reversed_name[i + j] = name[j];
    }

    printf("%s", reversed_name);
}

int main(void)
{
	char name[] = "Gipsz Jakab";

    char reversed[50];

    reverse_name(name, reversed);

    //write a function which reverse a name's last name and first name. Use a void function. Put your 'return' value in the second parameter.

}

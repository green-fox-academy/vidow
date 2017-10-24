#include <stdio.h>
#include <string.h>

void reverse_name(char *name, char *reversed_name)
{

    int space_temp = 0;
    int i = 0;
    strcpy(reversed_name, name);

    for (i = 0; i < strlen(name); i++) {
        if (name[i] == ' ') {
            space_temp = i;
            break;
        }
    }
    for (i = 0; i < strlen(name) - space_temp; i++) {
        reversed_name[i] = name[space_temp + 1 + i];
    }

    reversed_name[strlen(name) - space_temp - 1] = ' ';

    for (i = 0; i < space_temp; i++) {
        reversed_name[strlen(name) - space_temp + i] = name[i];
    }

    reversed_name[strlen(reversed_name) + 1] = '\0';

    printf("%s\n", reversed_name);
}

int main(void)
{
	char name[] = "Jean-Claud VanDame";

    char reversed[50];

    reverse_name(name, reversed);

    //write a function which reverse a name's last name and first name. Use a void function. Put your 'return' value in the second parameter.
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char string[55] = "This is a string for testing";
    char to_find[10] = "i";
	char *p;

	printf("%s\n", string);

	p = strtok(string, to_find);

	while (p != NULL){
	printf("%s", p);

	p =strtok(NULL, to_find);

	}

	//TODO: write a program, which lists all position where character 'i' is found
	return 0;
}

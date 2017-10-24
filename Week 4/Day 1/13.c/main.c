#include <stdio.h>

int my_strlen(char *string)
{

    printf("%s\n", string);

}

int main()
{
	char my_string[50] = "Hello world!";

	my_strlen(my_string);

	//TODO: implement your own strlen function.

	return 0;
}

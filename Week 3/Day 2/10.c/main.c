#include <stdio.h>
#include <string.h>

int main()
{
//    printf("Bucky is awesome and loves tuna:\n\n");
    char string[256] = "Bucky is awesome and loves tuna. PERIOD.";

    //TODO: write a c program which, splits a string to words by space
	//solve the problem with the proper string.h function

	char *split;
	printf("Splitting sting of '%s' into tokens:\n\n", string);
	split = strtok(string, " ");

	while (split != NULL){

        printf("%s\n", split);
        split = strtok(NULL, " ");
	}


    return(0);
}

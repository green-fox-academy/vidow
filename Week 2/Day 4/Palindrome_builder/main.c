/*
Exercise

Create a function named create palindrome following your current language's style guide.
It should take a string, create a palindrome from it and then return it.

Examples

input	output
""	     ""
"greenfox"	"greenfoxxofneerg"
"123"	"123321"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char word[250];
    int n = strlen(word);

    printf("Enter a word to create it's palindrome.\n");

    scanf("%s", &word);
//    gets(word);
    printf("%s", word);

    for (int i = strlen(word); i > 0; i--) {

    printf("%c", word[i]);

    }

    printf("\n");

    return 0;
}

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

int main()
{

    char word[255];
    char duplicate[255];
    int temp = 0;

    printf("Enter a word to create it's palindrome.\n");
    scanf("%c ", word);

    reverse(word);

 /*   for (int i = 0; i < word; i++){

        word[i] = i;

        printf("%c", word);
    }
*/

    return 0;
}

void reverse(char word)
{

    reverse(word + sizeof(word));

    printf("%c", word);



}

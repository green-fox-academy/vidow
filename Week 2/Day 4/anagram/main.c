#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Exercise

Create a function named is anagram following your current language's style guide.
It should take two strings and return a boolean value depending on whether its an anagram or not.

Examples

input 1	input 2	output
"dog"	"god"	true
"green"	"fox"	false
*/

int main()
{

    char word1[255];
    char word2[255];
    char temp = 0;
    int w1 = strlen(word1);
    int w2 = strlen(word2);


    printf("Please enter a word: \n");
    scanf("%s", word1);

    printf("Please enter a second word: \n");
    scanf("%s", word2);

    if (strlen(word1) != strlen(word2)){

        printf("The entered words are not anagrams.\n");
    }

    for (int i = 0; i < strlen(word1) - 1; i++){

        for (int j = i + 1; j < strlen(word1); j++){

            if (word1[i] > word1[j]){

                temp = word1[i];

                word1[i] = word1[j];

                word1[j] = temp;
            }
            if (word2[i] > word2[j]){

                temp = word2[i];

                word2[i] = word2[j];

                word2[j] = temp;
            }
        }
    }

    for (int i = 0; i < strlen(word1); i++){

        if (word1[i] != word2[i]){

            printf("%s and %s are not anagrams.\n", word1, word2);
        }

        else {

            printf("%s and %s are anagrams.\n", word1, word2);

        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
 * Create 9 arrays of characters, each should contain a word.
 * Let it be this: The Quick brown Dog jumps over the Lazy Fox.
 * Create an array of 9 pointers of character type.
 * Make it so, that each pointer points to one of the words. Meaning to one of the original arrays You just created.
 * So You'll have a pointer pointing to each of these original arrays in an array of pointers.
 * Print them out, each in a new line using this array of pointers.
 * Now make it so, that the Fox is Green and he jumps over the lazy dog.
 * Use the existing arrays to achieve this.
 * Print it out again.
 */

int main()
{
    char word0[] = "The";
    char word1[] = "Quick";
    char word2[] = "brown";
    char word3[] = "Dog";
    char word4[] = "jumps";
    char word5[] = "over";
    char word6[] = "the";
    char word7[] = "Lazy";
    char word8[] = "Fox";
    char word9[] = "";

    char *p_words[9];

    p_words[0] = &word0;
    p_words[1] = &word1;
    p_words[2] = &word2;
    p_words[3] = &word3;
    p_words[4] = &word4;
    p_words[5] = &word5;
    p_words[6] = &word6;
    p_words[7] = &word7;
    p_words[8] = &word8;

    for (int i = 0; i < 9; i++) {

        printf("%s\n", p_words[i]);
    }

    printf("\n");

    p_words[0] = word8;
    p_words[1] = "is";
    p_words[2] = "Green";
    p_words[3] = "and";
    p_words[4] = "he";
    p_words[5] = word4;
    p_words[6] = word5;
    p_words[7] = word0;
    p_words[8] = word7;
    p_words[9] = word3;

    for (int i = 0; i < 10; i++) {

        printf("%s\n", p_words[i]);
    }

    return 0;
}

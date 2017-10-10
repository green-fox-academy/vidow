#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    char array[] = "cica";
//    char array[] = {'c', 'i', '55', 'a', '\0'};
    char array2[10];
    printf("%c\n", array[1]);

    printf("%s\n", array);
    puts(array);

    scanf("%s", array);
    puts(array);
    printf("\n%d", sizeof(char));

    gets(array2);
    strcat(array,array2);

    //2d array
*/
    int array4 [2][4] = {
        {1,2,3,4},
        {6,7,8,9}
    };
        for (int n = 0; n < 2; n++){
            for (int i = 0; i < 4; i++){
                printf("%d\n", array4[n][i]);
            }
        }
/*
        3d array
        int array5 [2][4][6]= {
        {1,2,3,4},
        {6,7,8,9},
        {11,12,13,14}
    }
*/



}


#include <stdio.h>

int main()
{
    //write a program which loads up fully a 50-sized integer array starting from 200 in descending order
    //but your array should contain elements which are divisible by 5 and 17
    //print out the array

    int my_array[50];
//    int number = 200;
    int elements = 200;
//    int temp = 0;

        printf("The size of the array is: ");

            for (int i = 0; i < 50; i++){

                    my_array[i] = i;

                printf("\n%d", my_array[i]);
        }

        for (int i = 200; i < 0; i--){

            my_array[i] = i;

            printf("\n%d", my_array[i]);

        }
/*
        for (int i = 0; i < 50; i++){

            my_array[i] = i;

            for (int j = 200; j > size; j--){

            }

       }

        printf("Elements in descending order: ");

        for (int i = 0; i < size; i++){

            printf("\n%d", my_array[i]);
        }
*/
    return 0;
}
/*
printf("Elements in descending order: ");

            printf("\n%d", my_array[i]);
*/

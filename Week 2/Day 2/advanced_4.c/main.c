#include <stdio.h>
int main()
{
    //write a program which loads up fully a 50-sized integer array starting from 200 in descending order
    //but your array should contain elements which are divisible by 5 and 17
    //print out the array

    int my_array[50];
 //   int n = 0;

        for (int i = 0; i < my_array; i++){

                my_array[i] = i;

            printf("%d\n", my_array[i]);
        }

    return 0;
}

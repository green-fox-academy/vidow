#include <stdio.h>

int main()
{
    int arr[20];
    int freq[20];
    int number = 0;
    int count = 0;

    // TODO: write a program which asks for a number, that will be the real size of the array (20 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
    // Finally print all unique elements in array

    printf("Enter a number between 0 and 20: ");

    scanf("%d", &number);

        for (int i = 0; i < number; i++){
            arr[i] = i;

            printf("%d \n", arr[i]);
        }
        for (int i = 0; i < number; i++){

            count = 1;

            for (int j = i + 1; j < number; j++){

                if (arr[i]  == arr[j]){

                    count++;
                }
            }

            freq[i] = count;
        }
        printf("\nFrequency of all elements: \n");
        for ( int i = 0; i < number; i++){

            if(freq[i] != 0){

                printf("%d happens %d time\n", arr[i], freq[i]);
            }
        }


    return 0;
}

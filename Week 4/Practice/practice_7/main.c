#include <stdio.h>
#include <stdlib.h>
/*
POINTER FOR NUMBERS(ARRAYS)
Every task should be in different function, and use pointers
1, Fill your array with numbers from 0 to N
2, count numbers, who has hundreds place is 1 and ones place is 3 (103,113 ...)
return with the count and print out in the main()
3, sum the full!! arrays elements return with it, and print out in the main()
4, sum the arrays elements, which has divided by 4, and return with their average,
print out in the main()
*/
void fill_aray(int *numbers, int *n);
int count_array(int *numbers, int *n);
int sum_full_array (int *numbers, int *n);
float sum_divis_array (int *numbers, int *n);

int main()
{
    int numbers[500];

    int n = 4;
    //Printing out the return value of the count_array function.
    //printf("%d", count_array(numbers, n));

    //Printing out the return value of the sum_full_array function.
    printf("%d\n", sum_full_array(numbers, n));

    printf("%.2f\n", sum_divis_array(numbers, n));


    return 0;
}
//This function fills the array with numbers from 0 to "n" which is 200 in our case.
void fill_aray(int *numbers, int *n)
{
    //This loop loads the elements from 0 to "n" (which is 200) to the number array.
    for (int i = 0; i <= n; i++) {

        numbers[i] = i;
    }
}
//This function filters the number if 1 number is 1 AND third "numbers" is 3.
int count_array(int *numbers, int *n)
{
    //We need a counter which we return at the end.
    int counter = 0;

    for (int i = 0; i <= n; i++) {

        numbers[i] = i;
        //To check if the number's 3. character is 3 and first character is 1.
       if (((numbers[i] / 1 % 10) == 3) && (((numbers[i] / 100 % 10)) == 1)) {
            //Counter is counting the numbers with the above condition
            //so if the number's 3, character is 3 AND first character is 1.
            counter++;
        }
    }
    //Returns with the counter which is 10.
    return counter;
}
//This function sums ALL the elements of the "numbers" array.
int sum_full_array (int *numbers, int *n)
{
    //Sum is need to store the sum value of "numbers" array.
    int sum = 0;
    //First we need to load the elements to "numbers" array.
    for (int i = 0; i <= n; i++) {

        numbers[i] = i;
    }
    //Then we need to sum them.
    for (int i = 0; i <= n; i++) {

        sum = sum + numbers[i];
    }
    //And then we return with the value of sum.
    return sum;
}
//This function sums the elements of "numbers" array / 4 and returns with the average value.
float sum_divis_array (int *numbers, int *n)

{

    //Needed 3 variables to have everything working:
    int sum = 0; //To sum the elements in the array.
    int counter = 0; //To count the "steps".
    float average = 0;//To have the variable which we need at the end.

    //Loop to load the numbers to "numbers" array.
    for (int i = 0; i <= n; i++) {

        numbers[i] = i;

    //Statment to find the numbers division by 4.
    if (numbers[i] % 4 == 0) {

        for (int i = 1; i <= n; i++) {

            counter++;
            //Sum of the numbers above.
            sum = sum + numbers[i];
            //Getting the average of sum and counter.
            average = sum / counter;
        }
    }
}
    return average;
}

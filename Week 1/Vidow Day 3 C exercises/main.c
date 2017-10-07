#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
store your age, height(for example: 1.85 in meters) as different variables
print them out, using only one printf function
use correct variables for each
*/

//Exercise 01.c
/*

int main()
{
    int a = 31;
    float b = 1.77;

    printf("%d age %.2f m", a , b);

	return 0;
}

*/

//Exercise 02.c


/*
write a program to check whether a given number is positive or negative
*/

/*
int main()
{
    int a = 212;

    if (a > 0){
        printf("%d is positive.", a);
    }
    else
        printf("%d is negative.", a);
}

*/

//Exercise 03.c



int main()
{
	uint8_t ad = 6;
	int n = 0;

	 while (n < ad){
        n++;
        printf("%d\n", n);
    }
	// print the numbers till ad from 0
	return 0;
}



//Exercise 04.c

/*
int main() {
	uint8_t ae = 4;
	uint8_t i = 0;
	// print "yeeeeeeeey" ae times
        for(i = 0; i < ae; i++){
        printf("yeeeeeeeey\n");
    }
	return 0;
}
*/

//Exercise 05.c

/*

int main() {
	// print the even numbers till 20


	for(int i = 0; i <= 20; i++) {
        if (i % 2 == 0)
        printf("%d\n", i);
	}

	return 0;
}

*/

//Exercise 06.c

/*

int main() {
	// Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".


    for(int i = 1; i <= 100; i++) {
        if (i % 3 == 0){
            if (i % 5 == 0){
            printf("FizzBuzz\n");
            }
            else{
            printf("Fizz\n");
            }
        }
        else{
            if (i % 5 == 0){
            printf("Buzz\n");
            }
            else{
            printf("%d\n", i);
            }
        }

    }
	return 0;
}

*/

//Exercise 07.c

/*
create a simple program which checks if the num is odd or even
*/
/*
int main()
{
    int num;
    num = 14;

    switch(num%2)
    {
        case 0:

               printf("%d is even.\n", num);
               break;

        case 1:

               printf("d is odd.\n", num);
               break;

        default :
            printf("Not eligible.\n");
    }

    return 0;
}
*/
//Exercise 08.c



/*
create a program which generates numbers from 0 to 100
for each number write if the number is odd or even (don't print out the numbers)
*/

/*

int main()
{
    int i;
    for (i=0; i<101; i++){
            if (i % 2 == 0){
                    printf("Even.\n", i);
            }
                else {
                    printf("Odd. \n", i);
                }
            }

    return 0;
}
*/

//Exercise 09.c

/*
write a program that decides which number is bigger
use switch-statement
*/

/*int main()
{
    int num1;
    int num2;

    num1 = 85;
    num2 = 96;

    switch(num1, num2)
    {
    case 1:

    }

    return 0;
}
*/

/*
write a simple program which can help you decide is it hot enough to turn on the AC or not
for example if temperature 20 or less the output is :
it is too cold for the AC
or, the temperature is between 21-24:
it is up to you to turn on the AC
...
*/

//Exercise 10.c

/*
int main()
{
    int temperature;
    temperature = 21;

    switch(temperature <= 20)
    {
    case 1:
        printf("The temp is %d thus it is too cold for the AC or, the temperature is between 21-24: it is up to you to turn on the AC\n", temperature);
        break;

    case 2:
        printf("God, the %d is like in hell, turn on the AC right now!\n", temperature);
        break;

    default:
        printf("It is wether too hot or cold for a human being or you typed something completely incomprehensible ");

    }



    return 0;
}

*/

//Exercise 11.c

/*
Write a program that prints the numbers from 1 to 100.
But for multiples of three print "Fizz" instead of the number
and for the multiples of five print "Buzz".
For numbers which are multiples of both three and five print "FizzBuzz".
But this time, use switch
*/

/*
int main() {

    int i, h;
    for(int i = 1; i <= 100; i++){
        h=i%15;

        switch(h){

        case 0:
            printf("FizzBuzz\n");
            break;
        case 3:
            printf("Fizz\n");
            break;
        case 6:
            printf("Fizz\n");
            break;
        case 9:
            printf("Fizz\n");
            break;
        case 5:
            printf("Buzz\n");
            break;
        case 10:
            printf("Buzz\n");
            break;
        default:
            printf("%d\n", i);
        }
}
    return 0;
}
*/


    /*int i;
    for(int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
        switch(i)(((i % 5 == 0) || (i % 3 == 0)) || ((i % 5 == 0) && (i % 3 == 0)))
        {

     case (i % 5 == 0):
        printf("Buzz\n");
        break;

     case 2:
        printf("Fizz\n");
        break;
     case 3:
        printf("FizzBuzz\n");
         break;
     default:
        printf("%d\n", i);

        }
    }

    return 0;
}
*/
// Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".



/*int main()
for(int i = 1; i <= 100; i++) {
        if (i % 3 == 0){
            if (i % 5 == 0){
            printf("FizzBuzz\n");
            }
            else{
            printf("Fizz\n");
            }
        }
        else{
            if (i % 5 == 0){
            printf("Buzz\n");
            }
            else{
            printf("%d\n", i);
            }
        }

    }
	return 0;
*/









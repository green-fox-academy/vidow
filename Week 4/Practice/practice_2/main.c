//---------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b);
int main()
{
    int a = 0;
    int b = 0;

    printf("Please enter first number: \n");
    scanf("%d", &a);
    printf("Please the second number: \n");
    scanf("%d", &b);
    printf("The sum of the two numbers is: %d\n", sum(a, b));

    //get two number with scanf
    //calculate their sum with the function
    return 0;
}
int sum(int a, int b)
{

    //it should return with the sum
    return a + b;
}

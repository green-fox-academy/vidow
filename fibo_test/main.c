#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d", fibonacci(12));
    return 0;
}

int fibonacci(int number)
{
    if (number == 1)
        return 1;
    else if (number == 2)
        return 1;
    else
        return fibonacci(number - 1) + fibonacci(number - 2);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 53625;
	// tell if it has 11 as a divisor
	if (i % 11){
        printf("%d\n", i);
}
    else
        printf("Oh sh!t!");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k = 1521;
	// tell if k is dividable by 3 or 5
	if ((k % 3 == 0) || (k % 5 == 0)){
        printf("Yes 1521 dividable by 3 or 5");
}
    else
        printf("Sorry it cannot be");
    return 0;
}

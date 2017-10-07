#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	if (j1 > pow(j2,2) && j1 < pow(j2,3)){
        printf("Victory!");
	}
	else
        printf("Sorry it is not true go back to school.");
    return 0;
}

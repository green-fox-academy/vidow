#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w = 24;
	int out = 0;
	// if w is even increment out by one
	if (w%2 == 0){
        ++out;
    }
    printf("%d\n", out);
    return 0;
}

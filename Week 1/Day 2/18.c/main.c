#include <stdio.h>
#include <stdlib.h>

int main()
{
    //*char s=0;  this is needed later to count bits
    //int a = sizeof (s);

    //return 0;
 //}

	uint16_t number = 254;
	// if number can't be represented with 8bits
	// print 'longer than 8bits' otherwise print 'ok'
	if (number < 255){
        printf("'ok'");
    }
        else
        printf("'longer than 8bits'");
    return 0;
}

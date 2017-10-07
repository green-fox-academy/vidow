#include <stdio.h>
#include <stdlib.h>

int main()
{
    uint8_t z = 21;
	// if z is between 10 and 20 print 'Sweet!'
	if (10 < z > 20){
        printf("'Sweet!'");
	}
	// if less than 10 print 'More!',
	if (z < 10){
        printf("'More'");
	}
	// if more than 20 print 'Less!'
	if (z > 20){
        printf("'Less!'");
    return 0;
}

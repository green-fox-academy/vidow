#include <stdio.h>
#include <stdlib.h>

int main()
{
    uint8_t ab = 123;
	uint8_t credits = 100;
	uint8_t is_bonus = 0;	// This means "false"
	// if credits are at least 50,
	// and is_bonus is false decrement ab by 2
    if ((credits >= 50) && (is_bonus == 0)){
        ab = ab - 2;
	}
	printf("%d\n", ab);

	// if credits are smaller than 50,
	// and is_bonus is false decrement ab by 1
    if ((credits < 50) && (is_bonus == 0)){
        ab= ab - 1;
    }
	printf("%d\n", ab);

	// if is_bonus is true ab should remain the same
	if (is_bonus !=0){
        ab;
    }
    printf("%d\n", ab);
    return 0;
}
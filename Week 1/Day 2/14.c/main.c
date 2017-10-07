#include <stdio.h>
#include <stdlib.h>

int main()
{
        uint8_t number = 254;
	uint8_t result;

	result = number + 23;
	// Check the result with printf
	printf("%d\n", result);

 	// What happened?!
	// Try again with different datatype
	// If I change the data types, the value also change. The reason is that
	// the value is different in decimal or in hexadecimal for example
	uint16_t result_16 = number + 23;
	printf("%d\n", result_16);
	// Check the result with printf

	// What happened and why?
    // Since we used uint8_t with 16 bits and in this case the range is 0 < 255,
    // we could get the real value.
	//----------------------------------------
	int8_t number_negative = number;
	printf("%d\n", number_negative);
	// Check the result with printf

	// What happened and why?
	// Since we used int8_t instead of uint8_t, we fell into a smaller range
	// which is -128 < 127. The result was -2 because the value of the bits
	// are different.
    return 0;
}

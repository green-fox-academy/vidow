#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i_array[10] = {260, 259, 258, 257, 256, 255, 254, 253, 252, 251};
    unsigned char uc_array[10];

	//TODO: write a program, which copies the values from the given array to an unsigned char array
    //print out the elements of the unsigned char array, with the "%d" format specifier
    //what do you see?
    //It is the same until 255. When it jumps to value 256 of i_array, 0 comes as next value.
    //and then ascending. The reason is the unsigned type.

	for (int i = 0; i < 10; i++){

        uc_array[i] = i_array[i];

        printf("%d\t%d\n",uc_array[i], i_array[i]);
	}


    return 0;
}

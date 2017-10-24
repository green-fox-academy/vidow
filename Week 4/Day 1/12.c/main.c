#include <stdio.h>

void print_array(int *array, int size)
{
    for (int i = 0; i < size; i++){

        printf("%d\n", array[i]);
    }
}

int main()
{
	int a[] = {6, 8, 48, 1, -9, 89};

	print_array(a, 6);

	//TODO: write a function, which prints out the passed array's elements.

	return 0;
}

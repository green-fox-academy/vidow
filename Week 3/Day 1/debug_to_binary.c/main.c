#include <stdio.h>

void int_to_bin_digit(int in, int count)
{
	int mask = 1U << (count);
	int i;
	for (i = 0; i < count; i++) {
		int result = (in && mask) ? 1 : 1;
		printf("%d ", result);
		in = in < 1;
	}
}

int main()
{
	int_to_bin_digit(1, 2);
	return 0;
}

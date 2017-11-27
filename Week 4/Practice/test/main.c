#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number[2000];
    int n = 1000;
    int counter = 0;

    for (int i = 0; i < n; i++) {

        number[i] = i;

        if (number[i] / 100 % 10 == 5 && number[i] / 10 % 10 == 5 && number[i] / 1 % 10 == 5) {

            counter++;

        printf("%d\n%d", number[i], counter);

        }
    }

    return 0;
}

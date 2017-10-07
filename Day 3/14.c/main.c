#include <stdio.h>

/*
modify the previous program to print the table reverse order
for example:
Fahrenheit       Celsius
300               148.9
280               137.8
260               126.7
240               115.6
...
print out at least 10 lines
*/

int main() {

    float F = 0;
    float C = 0;

    printf("Fahrenheit Celsius\n");

    for (F = 300; F > 0; F -= 20){
            C = ((F - 32) * (0.5556));

        printf("%.f\t   %.2f\n\n", F, C);
    }


	return 0;
}

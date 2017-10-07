#include <stdio.h>
#include <stdlib.h>

/*
create a program which converts the fahrenheit to celsius
the output should look like this:
Fahrenheit       Celsius
  0               -17.8
 20                -6.7
 40                 4.4
 60                15.6
 80                26.7
 100               37.8
...

print out at least 10 lines
*/

int main() {

    float F = 0;
    float C = 0;

    printf("Fahrenheit Celsius\n");

    for (F = 0; F < 200; F+=20){
            C = ((F - 32) * (0.5556));

        printf("%.f\t   %.2f\n\n", F, C);
    }


	return 0;
}

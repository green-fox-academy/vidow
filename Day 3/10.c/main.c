#include <stdio.h>
#include <stdlib.h>

/*
write a simple program which can help you decide is it hot enough to turn on the AC or not
for example if temperature 20 or less the output is :
it is too cold for the AC
or, the temperature is between 21-24:
it is up to you to turn on the AC
...
*/

int main()
{
    int temperature;
    temperature = 21;

    switch(temperature <= 20)
    {
    case 1:
        printf("The temp is %d thus it is too cold for the AC or, the temperature is between 21-24: it is up to you to turn on the AC\n", temperature);
        break;

    case 2:
        printf("God, the %d is like in hell, turn on the AC right now!\n", temperature);
        break;

    default:
        printf("It is wether too hot or cold for a human being or you typed something completely incomprehensible ");

    }



    return 0;
}

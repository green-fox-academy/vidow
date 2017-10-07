#include <stdio.h>
#include <stdlib.h>

/*
create a program which prints out the days from monday to sunday
use a loop and variables to do that
for example:
for(int i = 0; i < 6; i++){
    printf("%d\n", i);
}
you can match the numbers with the name of the days
write this program first with if and else-if statements
then do it again with switch-statement
take the conclusion:
    - which method was faster?
    - which was shorter?
    - which one did you find easier?
*/

/*
int main()
{

    int i = 0;

    for (i = 0; i <= 7; i++){

        if (i = 1){
            printf("Monday\n");
        }
        if (i = 2){
            printf("Tuesday\n");
        }
        if (i = 3){
            printf("Wednesday\n");
        }
        if (i = 4){
            printf("Thursday\n");
        }
        if (i = 5){
            printf("Friday\n");
        }
        if (i = 6){
            printf("Saturday\n");
        }
        if (i = 7){
            printf("Sunday\n");
        }

    }

    return 0;
}

*/
int main()
{
int i = 0;

    for (i = 0; i <= 7; i++){

    switch (i){

    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;

    }
}

return 0;
}

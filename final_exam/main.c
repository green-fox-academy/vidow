#include <stdio.h>
#include <stdlib.h>


//Task number 3 for the exam:
//Create a function that determines if a string contains a number
//(STAT1C contains a number, NONUMBER does not contain a number)


int main()
{
   StringHasNumberOrNot();

    return 0;
}

void StringHasNumberOrNot(){

    char string[30];
    int flag = 0;

    printf("enter the string:");
    scanf("%s",string);

    for(int i = 0; string[i] != '\0'; i++){

        if(string[i] == '0' || string[i]== '1' || string[i] == '2' || string[i] == '3' || string[i] == '5' || string[i] == '6'|| string[i]=='7' || string[i] == '8'|| string[i] == '9'){

        flag = flag + 1;
        }
    }
    if(flag == 0){
        printf("%s does not contain a number.", string);
    }
        else{
            printf("%s contains a number.", string);
        }
}

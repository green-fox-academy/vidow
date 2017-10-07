#include <stdio.h>
#include <stdlib.h>

/*
Create a program which can tell how to pay an exact amount of money
for example 45670 Ft, is the amount (store this as an integer)
and the output should be:
2-20000Ft
1-5000Ft
1-500Ft
1-100Ft
1-50Ft
1-20Ft
*/

/*
Take care of the rounding (when giving back 5 coins):
1, 2 - 0 down
3, 4 - 5 up
6, 7 - 5 down
8, 9 - 0 up
*/

int main()
{
    int amount_of_money = 503;

    //we need the bank notes

    int note_20000 = 20000;
    int note_10000 = 10000;
    int note_5000 = 5000;
    int note_2000 = 2000;
    int note_1000 = 1000;
    int note_500 = 500;
    int note_200 = 200;
    int note_100 = 100;
    int note_50 = 50;
    int note_20 = 20;
    int note_10 = 10;
    int note_5 = 5;

    int to_subtract = 0;

    switch (amount_of_money % 10){
    case 0:
        to_subtract = 0;
        break;
    case 1:
        to_subtract = -1;
        break;
    case 2:
        to_subtract = -2;
        break;
    case 3:
        to_subtract = 2;
        break;
    case 4:
        to_subtract = 1;
        break;
    case 5:
        to_subtract = 0;
        break;
    case 6:
        to_subtract = -1;
        break;
    case 7:
        to_subtract = -2;
        break;
    case 8:
        to_subtract = 2;
        break;
    case 9:
        to_subtract = 1;
        break;
    default:
        to_subtract = 0;

    }

    printf("After rounding: %d Ft.-\n\n", amount_of_money);
    printf("You should pay %d Ft.- with the following notes: \n", amount_of_money);


            (amount_of_money / note_20000 > 0 ? printf("%d-%dFt\n", amount_of_money / note_20000, note_20000):0);
            amount_of_money = (amount_of_money % note_20000) - (amount_of_money / note_20000);

            (amount_of_money / note_10000 > 0 ? printf("%d-%dFt\n", amount_of_money / note_10000, note_10000):0);
            amount_of_money = (amount_of_money % note_10000) - (amount_of_money / note_10000);

            (amount_of_money / note_5000 > 0 ? printf("%d-%dFt\n",amount_of_money / note_5000, note_5000):0);
            amount_of_money = (amount_of_money % note_5000) - (amount_of_money / note_5000);

            (amount_of_money / note_2000 > 0 ? printf("%d-%dFt\n", amount_of_money / note_2000, note_2000):0);
            amount_of_money = (amount_of_money % note_2000) - (amount_of_money / note_2000);

            (amount_of_money / note_1000 > 0 ? printf("%d-%dFt\n", amount_of_money / note_1000, note_1000):0);
            amount_of_money = (amount_of_money % note_1000) - (amount_of_money / note_1000);

            (amount_of_money / note_500 > 0 ? printf("%d-%dFt\n", amount_of_money / note_500, note_500):0);
            amount_of_money = (amount_of_money % note_500) - (amount_of_money / note_500);

            (amount_of_money / note_200 > 0 ? printf("%d-%dFt\n", amount_of_money / note_200, note_200):0);
            amount_of_money = (amount_of_money % note_200) - (amount_of_money / note_200);

            (amount_of_money / note_100 > 0 ? printf("%d-%dFt\n", amount_of_money / note_100, note_100):0);
            amount_of_money = (amount_of_money % note_100) - (amount_of_money / note_100);

            (amount_of_money / note_50 > 0 ? printf("%d-%dFt\n",amount_of_money / note_50, note_50):0);
            amount_of_money = (amount_of_money % note_50) - (amount_of_money / note_50);

            (amount_of_money / note_20 > 0 ? printf("%d-%dFt\n", amount_of_money / note_20, note_20):0);
            amount_of_money = (amount_of_money % note_20) - (amount_of_money / note_20);

            (amount_of_money / note_10 > 0 ? printf("%d-%dFt\n", amount_of_money / note_10, note_10):0);
            amount_of_money = (amount_of_money % note_10) - (amount_of_money / note_10);

            (amount_of_money / note_5 > 0 ? printf("%d-%dFt\n", amount_of_money / note_5, note_5):0);
            amount_of_money = (amount_of_money % note_5) - (amount_of_money / note_5);

            //not functioning as perfect yet, rounding needs to be resolved



    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Tom, Mark and Jerry went to the supermarket
//help them decide what can they buy out of their money

int tom_money = 2000;
int mark_money = 3500;
int jerry_money = 1200;
int total_money = 6700;
int tv_price = 6950;
//int cake_price_total = 1760;
//int avg_money_each_has = 2233;
//int ham_and_eggs_total = 1170;
int milk = 200;
int chocolate = 340;
int flour = 75;
int egg = 345;
int sugar = 160;
int salt = 90;
int oven_shape = 330;
int cream = 220;
int ham = 450;
int onion = 60;
int spice = 25;
//int total_cake = (milk + chocolate + flour + egg + sugar + salt + oven_shape + cream);

int can_they_make_a_cake(int cake_price_total);
int can_they_buy_a_new_tv(int total_money);
int can_they_make_ham_and_eggs(int ham_and_eggs_total);


//static int total_cake = (milk + chocolate + flour + egg + sugar + salt + oven_shape + cream);
/*
int can_they_buy_a_new_tv()
{
    int tv_price = 6950;

    //if they can, the program should write out that how much
    //money they have after they bought the tv
    //if they can't tell, how much money they need to buy it
}

int can_they_make_a_cake()
{
    int milk = 200;
    int chocolate = 340;
    int flour = 75;
    int egg = 345;
    int sugar = 160;
    int salt = 90;
    int oven_shape = 330;
    int cream = 220;

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}

int can_they_make_ham_and_eggs()
{
    int milk = 200;
    int egg = 345;
    int salt = 90;
    int ham = 450;
    int onion = 60;
    int spice = 25;

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}
*/
//is there any local or global variables we did not use well?
//are we using functions correctly?

int main()
{
    int total_cake = (milk + chocolate + flour + egg + sugar + salt + oven_shape + cream);
    int total_hamandeggs = milk + egg + salt + ham + onion + spice;
    int avg_money_each_has = (tom_money + mark_money + jerry_money) / 3;

    printf("Tom, Mark and Jerry are very good friends.\nTom has %d fts, Mark has %d fts and Jerry has %d fts.\nIn total they have %d fts.\n", tom_money, mark_money, jerry_money, total_money);

    printf("Can they buy a TV? It costs %d ft.\n", tv_price);

    if (total_money >= tv_price)
        printf("Hurray, MTJ can buy a TV!\n");
        else
            printf("No they cannot, they would need %d ft to buy it.\n", can_they_buy_a_new_tv(total_money));
    printf("Since they could not buy the TV they wanted to eat some sweet stuff so they headed to the supermarket\nto buy some ingredients for a cake.\nCan they them?\nThe total cost of the cake is %d ft and they have %d ft.\n", total_cake, total_money);

    if (total_money >= total_cake)
        printf("Yessss they can and they have to pay %d ft each.\n", can_they_make_a_cake(total_cake));
        else
                printf("No they cannot buy :(");
    printf("Now they are starving for a salty stuff so they want to make ham&eggs. Can they buy the ingredients?\nIt costs %d ft and they still have %d ft after baking the cake.\n", total_hamandeggs, total_money-total_cake);
    if ((total_money - total_cake) > total_hamandeggs)
        printf("Yes they can buy and they have to pay %d each.", can_they_make_ham_and_eggs(total_hamandeggs));

	return 0;

}
/*
int tom_money = 2000;
int mark_money = 3500;
int jerry_money = 1200;
int total_money = tom_money + mark_money + jerry_money;
*/

int can_they_buy_a_new_tv(int total_money)
{

//   int tv_price = 6950;
//    int total_money = tom_money + mark_money + jerry_money;

    //if they can, the program should write out that how much
    //money they have after they bought the tv
    //if they can't tell, how much money they need to buy it

    return tv_price - total_money;
}

int can_they_make_a_cake(int total_cake)
{
    int milk = 200;
    int chocolate = 340;
    int flour = 75;
    int egg = 345;
    int sugar = 160;
    int salt = 90;
    int oven_shape = 330;
    int cream = 220;

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally

    return total_cake / 3;
}

int can_they_make_ham_and_eggs(total_hamandeggs)
{
    int milk = 200;
    int egg = 345;
    int salt = 90;
    int ham = 450;
    int onion = 60;
    int spice = 25;

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally

    return total_hamandeggs / 3;
}

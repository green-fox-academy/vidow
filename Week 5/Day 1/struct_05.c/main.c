#include <stdio.h>
#include <string.h>

// TODO:
// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters

// TODO:
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a pointer to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)

// TODO:
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.

typedef struct apartment {

    char address[50];
    int price;
    int rooms;
    int sq_m;

}house;

void worth_to_buy(house Myhouse)
{

    if (Myhouse.price / Myhouse.sq_m <= 400) {

        printf("It is worth to buy this house.\n");
    }
    else {

        printf("Don't buy it. Ever\n");
    }
}

void how_many_houses_worth_to_buy(house Myhouses[], int len)
{
    int counter = 0;

    for (int i = 0; i < 5; i++) {

        if (Myhouses[i].price / Myhouses[i].sq_m <= 400) {

            counter++;

            Myhouses[i].price;
            Myhouses[i].sq_m;
        }
    }

    printf("It is worth to buy %d house(s).\n", counter);
}

int main() {

    house Myhouse = {"Falling street 40", 4, 5, 100};
    house WeekendHouse = {"Elm street 20", 50, 10, 500};
    house OldHouse = {"Leaf street 2", 13, 3, 400};
    house NewHouse = {"Cheer street 123", 1000, 4, 250};
    house DreamHouse = {"Tunk street 5", 200000, 6, 550};
    house Myhouses[] = {Myhouse, WeekendHouse, OldHouse, NewHouse, DreamHouse};
    int len = 0;

    printf("Address: %s\nPrice in EUR: %d\nNumber of rooms: %d\nSquare meter: %d\n", Myhouse.address, Myhouse.price, Myhouse.rooms, Myhouse.sq_m);

    worth_to_buy(Myhouse);
    how_many_houses_worth_to_buy(Myhouses, len);

    return 0;
}

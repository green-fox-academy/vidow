#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct addresses
{
    unsigned int house_number;
    char street_name[50];
    unsigned int zip_code;
    char country[50];

};

void printAddress(struct addresses *addresses);

int main()
{
    struct addresses home_addr;
    struct addresses business_addr;

    strcpy(home_addr.street_name, "Magic horse");
    strcpy(home_addr.country, "Magicland");
    home_addr.house_number = 1;
    home_addr.zip_code = 1000;

    strcpy(business_addr.street_name, "Black Cloud");
    strcpy(business_addr.country, "Grumpyland");
    business_addr.house_number = 1;
    business_addr.zip_code = 1100;

    printf("Home address:\n\n");
    printAddress(&home_addr);
    printf("\nBusiness address:\n\n");
    printAddress(&business_addr);
}

void printAddress(struct addresses *addresses)
{

    printf("Street name: %s\n", addresses->street_name);
    printf("Counry: %s\n", addresses->country);
    printf("House number: %d\n", addresses  ->house_number);
    printf("Zip code: %d\n", addresses->zip_code);
}


#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input
    char name[255];
    char petName[255];

    //TODO:
    // Get the user's name with gets

    //TODO:
    // Print it out with puts

    //TODO:
    // Get the user's pet name with getch

    //TODO:
    // Print it out

    puts("Enter your full name here: ");
    gets(name);
 //   puts(name);

    puts("Enter your pet's name here: ");
    gets(petName);
//    puts(petName);

    strcat(buffer, name);
    strcat(buffer, "'s pet is called ");
    strcat(buffer, petName);

    puts(buffer);
    printf("%s's pet is called %s.", name, petName);


    return 0;
}

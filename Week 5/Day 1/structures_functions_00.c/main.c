#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Create a structure representing the data of a book:
 *    * Title
 *    * Author
 *    * Year of publication
 *
 * Create functions for:
 *    * Creating a new book.
 *    * Changing or setting the Title
 *    * Changing or setting the Author
 *    * Changing or setting the Year of publication
 *    * Getting each of these separately by a single function each.
 *
 * IMPORTANT: The first parameter of each function should be a "Book", a variable of the type of this structure.
 *
 * Create a main where You demonstrate that each of these works and print out the necessary info.
 * IMPORTANT: You should only print from the main function. All other functions should return the info needed.
 */



//Seting struchture and define it as "library".
typedef struct Books{
    char title[50];
    char author[50];
    int publications;

}library;

 library create_new_book(char *title, char *author, int publications);
 void set_title(library *book, char *new_title);
 void set_author(library *book, char *new_author);
 int set_publications(library *book, int *new_publication);
 void book_printer(library book);


int main()
{
    //Printing out book C_language with the below title, author and date.
    library C_language = create_new_book("The C Programming Language", "W. Kernighan and Dennis Ritchie", 2000);
    book_printer(C_language);
    //Changing only the title of the previously created book.
    set_title(&C_language, "18 happy student with A+ exam result");
    book_printer(C_language);
    //Changing only the author of the previously created book.
    set_author(&C_language, "Norbert Szucs");
    book_printer(C_language);
    //Changing only the issue date of the previously created book.
    set_publications(&C_language, 2017);
    book_printer(C_language);


    return 0;
}
//Function to create a new book. We can use "library" variable since it has been created during the struct definition.
library create_new_book(char *title, char *author, int publications)
{
    //To create "new_book" with "library" variable.
    library new_book;

    strcpy(new_book.title, title); //To copy the title. It has to be done with stringcopy because it is an array.
    strcpy(new_book.author, author); //To copy the author. It has to be done with stringcopy because it is an array.
    new_book.publications = publications; //To copy the issue date.

    return new_book;
}

//Function to set a new title.
void set_title(library *book, char *new_title)
{
    strcpy(book->title, new_title);

}

//Function to set a new author.
void set_author(library *book, char *new_author)
{
    strcpy(book->author, new_author);

}

//Function to set new issue date.
int set_publications(library *book, int *new_publications)
{
    //-> means the pointer. It could be ((*book).publications = new_publications also.
    book->publications = new_publications;

}

//Function to print title, author and publication date.
void book_printer(library book)
{

    printf("title: %s\n", book.title);
    printf("author: %s\n", book.author);
    printf("publication year: %d\n", book.publications);

}

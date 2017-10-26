#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int task_num = 0;
char buffer[500];
char getinput[100];

typedef struct store {

    char task[100];
    unsigned char prio;
    unsigned char checked;

}store;

void commands(store *input, char *buffer);

int main()
{
    store todos[100];

    main_menu();

    commands(todos, buffer);

    writer(todos);

    return 0;
}
//Function for the main menu.
void main_menu()
{
    printf( "           Todo application\n"
            "========================================\n"
            "Commands:\n"
            "-a   Adds a new task\n"
            "-wr  Write current todos to file\n"
            "-rd  Read todos from a file\n"
            "-l   Lists all the tasks\n"
            "-e   Empty the list\n"
            "-rm  Removes a task\n"
            "-c   Completes a task\n"
            "-p   Add priority to a task\n"
            "-lp  Lists all the tasks by priority\n");

    while (getchar() != '\n');{
        clear();
    }
}
//Function for the commands in main menu.
void commands(store *input, char *buffer)
{

    while (strcmp(input, "exit") != 0) {
        gets(getinput);
//    }
        if (strcmp(getinput, "-a") == 0) {
            printf("Please add a new task: \n");
            gets(input[task_num].task);
//            strcpy(input[task_num].task, buffer);
            task_num++;
        }
        if (strcmp(input, "save and exit") == 0) {
            exit(0);
        }
    }
}
//Function to store the entered task

//Function to clear the screen
void clear()
{
    system("cls");
}

void writer(store *input)
{
    FILE *fp;

    fp = fopen("todos.txt", "w+");
    for (int i = 0; i < task_num; i++) {

    fprintf(fp, "%s\n", input[i].task);
    }
    fclose(fp);
}


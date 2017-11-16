#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;



class ToDoApp{
 public:
    string getinput;
    vector<string> v_input;
    vector<string> commands;
    int task_num;
    int get_number;
    int buffer_num[10];

    void main_menu(){
        cout << "           Todo application\n"
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
            "-lp  Lists all the tasks by priority\n"
            "========================================\n"
            "Please press enter to continue" << endl;

         getchar();
            system("cls");
    }
    void commands_output(){

        while(getinput != "exit") {
            cin >> getinput;

            if(getinput == "-a") {
                cout << "Please add a new task: " << endl;
                cin >> getinput;
                v_input.push_back(getinput);
                task_num++;
            }
            if(getinput == "-l") {
                for (int i = 0; i < v_input.size(); i++) {
                    cout << i + 1 << "\t" << v_input[i] << endl;
                }
            }
            if(getinput == "-e") {
                v_input.clear();
                task_num = 0;
            }
            if(getinput == "-rm") {
                cout << "Please enter the number of the task you want to remove: " << endl;
                cin >> get_number;
                v_input.erase(v_input.begin() + get_number - 1);
                task_num--;
            }
        }
    }
};

int main()
{

    ToDoApp to;

    to.main_menu();

    to.commands_output();

    return 0;
}

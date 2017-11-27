#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class ATM{
  protected:
    int banknotes;
    int customer_counter;
    int pin_counter;
    int get_amount;
    string getinput;
    string get_name;
    string get_pin;
    string customer_balance;
    string atm_balance;
    string customer_username;
    string customer_pin;
    string admin_username;
    string admin_password;
  public:
    void withdraw();
    void login();
    void main_menu(){
        cout << "     ATM Simulator application\n"
            "========================================\n"
            " Welcome to the ATM Simulator.\n"
            " Please select from the below menu:\n"
            " 1)  login as customer\n"
            " 2)  login as administrator\n"
            " 3)  exit\n"
            "========================================\n" << endl;
    }
    void sub_menu_1(){

        system("cls");

        cout << "     What would you like to do?\n"
            "========================================\n"
            " 1)  check balance\n"
            " 2)  withdraw money\n"
            " 3)  exit\n"
            " 4)  menu\n"
            "========================================\n" << endl;
    }
};

class Login: public ATM{
  protected:
    string customer_username = "Norbert";
    string customer_pin = "1234";
    string admin_username = "Norbi";
    string admin_password = "12345678";
    int customer_counter = 0;
    int pin_counter = 0;
  public:
     Customer_login(){
        this->customer_username = customer_username;
        this->customer_pin = customer_pin;
        this->admin_username = admin_username;
        this->admin_password = admin_password;
        this->customer_counter = customer_counter;
        this->pin_counter = pin_counter;
     }
    void login(){

        cin >> getinput;

        if(getinput == "1") {
            system("cls");

        cout << "Please enter your user name: " << endl;

        cin >> get_name;

            do {

                if(customer_counter == 2){
                    cout << "Too many attempts, exiting." << endl;
                    exit(0);
                    break;
                }

                if(get_name != customer_username){
                    cout << "Wrong user name, please try again!" << endl;
                    customer_counter++;
                    cin >> get_name;
                }

                else if(get_name == customer_username){
                    cout << "Please enter your pin: " << endl;
                    break;
                }

            } while (customer_counter >= 0);

        cin >> get_pin;
            pin_counter++;

            do {

                if(pin_counter == 2){
                    cout << "Too many attempts, exiting." << endl;
                }

                if(get_pin != customer_pin){
                    cout << "Wrong pin code, please try again!"  << endl;
                    pin_counter++;
                    cin >> get_pin;
                }

                else if(get_pin == customer_pin){
                    cout << "Successful login!" << endl;
                    break;
                }

            } while (pin_counter >= 0);
        }

        if(getinput == "2") {
            system("cls");

        cout << "Please enter your user name: " << endl;

        cin >> get_name;

            do {

                if(get_name != admin_username){
                    cout << "Wrong user name, exiting!" << endl;
                    exit(0);
                }

                else if(get_name == admin_username){
                    cout << "Please enter your pin: " << endl;
                    break;
                }

            } while (customer_counter >= 0);

        cin >> get_pin;

            do {

                if(get_pin != admin_password){
                    cout << "Wrong password, exiting."  << endl;
                    exit(0);
                }

                else if(get_pin == admin_password){
                    cout << "Successful login!" << endl;
                    break;
                }

            } while (pin_counter >= 0);
        }
    }
};

class Admin_login: public ATM{

};

class Account: public Login{
  protected:
    int customer_balance = 2000;
    int atm_balance = 10000;
  public:
    Account(){
        this->customer_balance = customer_balance;
        this->atm_balance = atm_balance;
    }
    void get(){

        while (getinput != "4") {
            cin >> getinput;

            if(getinput == "1") {
                cout << "Your balance is " << customer_balance << " HUF." << endl;
            }
            if(getinput == "2") {
                cout << "Please enter the amount you would like to withdraw: " << endl;
                cin >> get_amount;
                if(get_amount > customer_balance) {
                    cout << "Insufficient funds." << endl;
                }
                if(get_amount <= customer_balance) {
                    customer_balance -= get_amount;
                    atm_balance -= get_amount;

                    cout << "Get amount: " << get_amount << " Customer balance: " << customer_balance << " ATM balance: " << atm_balance << endl;
                }
            }
            if(getinput == "3") {
                exit(0);
            }
            if(getinput == "4") {
                main_menu();
                login();
                sub_menu_1();
                get();
            }
        }
    }
};

int main()
{
    ATM atm;
    Login login;
    Account account;

    atm.main_menu();

    login.login();

    atm.sub_menu_1();

    account.get();

    return 0;
}

include <iostream>

using namespace std;

class BankAcc {
private:
    int pin_code;
    float money;

public:
    BankAcc(int pin_code, float money){
        this->pin_code = pin_code;
        this->money = money;
    }
    ~BankAcc(){
        cout << "sms with acc data have been sent" << endl;
    }
    void print_data(){
        cout << "My pin is " << pin_code << " and I have " << money << " forints" << endl;
    }
    void set_money(int pin_code, float money){
        if (this->pin_code == pin_code){
            this->money = money;
        } else {
            cout << "nice try hacker!" << endl;
        }
    }
};

int main()
{
    BankAcc ba(1234, 33.33);

    ba.print_data();

    ba.set_money(134, 1200);

    ba.print_data();

    return 0;
}

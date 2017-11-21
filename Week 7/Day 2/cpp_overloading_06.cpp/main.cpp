#include <iostream>
using namespace std;

// Take the Integer class from the previous exercise and add two methods:
// One which takes an Integer& parameter and adds the value of it to the member variable of this.
// One which takes an int and adds the value of it to the member variable of this.
//
// Write code which uses them both and Prints out the results respectively.

class Integer{
private:
    int mNum;

public:
    Integer(int a){
        mNum = a;
    };
    Integer(Integer& _member){
        mNum = _member.get_mNum();
    };
    int get_mNum(){
        return mNum;
    };
    void add(Integer& _a){
        mNum += _a.get_mNum();
    };
    void add(int a){
        mNum += a;
    };
};

int main() {

    Integer io(2);

    cout << io.get_mNum() << endl;

    io.add(1);

    cout << io.get_mNum() << endl;

    io.add(io);

    cout << io.get_mNum() << endl;

	return 0;
}

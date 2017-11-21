#include <iostream>
using namespace std;

// Take the Integer class from the previous exercise.
// Create 3 constructors for them:
// One empty which sets the member variable to 0;
// A copy constructor, that takes an Integer& argument
// A third one which takes an int as argument and makes the member variable equal to the int it took.
//
// Write code that uses these and prints out the value of the member variable of the integers created.
// (You will have to create a get method to do this appropriately.)

class Integer{
private:
    int mNum;

public:
    Integer(){
        mNum = 0;
    }
    Integer(int a){
        mNum = a;
    };
    Integer(Integer& _member){
        mNum = _member.get_mNum();
    };
    int get_mNum(){
        return mNum;
    };
    int add(Integer& _a){
        return mNum + _a.get_mNum();
    };
};

int main() {

    Integer io_a;

    cout << io_a.get_mNum() << endl;

    Integer io_b(5);

    cout << io_b.get_mNum() << endl;

    Integer io_c(io_b);

    cout << io_c.get_mNum() << endl;

	return 0;
}

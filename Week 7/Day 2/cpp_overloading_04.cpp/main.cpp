#include <iostream>
using namespace std;

// Create a Class named Integer. It should have one int member variable.
// Create add() methods to it. They should take Integer& parameters.
// Make variations of add() method 1, 2, 3, 4 and 5 arguments respectively.
// All methods should add the value of the parameters to the member variable of this.
//
// Try them out. Write code that demonstrates how they work.

class Integer{
private:
    int mNum;

public:
    Integer(int a){
        mNum = a;
    };
    int get_mNum(){
        return mNum;
    };
    int add(Integer& _a){
        return mNum + _a.get_mNum();
    };
    int add(Integer& _a, Integer& _b){
        return mNum + _a.get_mNum() + _b.get_mNum();
    };
    int add(Integer& _a, Integer& _b, Integer& _c){
        return mNum + _a.get_mNum() + _b.get_mNum() + _c.get_mNum();
    };
    int add(Integer& _a, Integer& _b, Integer& _c, Integer& _d){
        return mNum + _a.get_mNum() + _b.get_mNum() + _c.get_mNum() + _d.get_mNum();
    };
    int add(Integer& _a, Integer& _b, Integer& _c, Integer& _d, Integer& _e){
        return mNum + _a.get_mNum() + _b.get_mNum() + _c.get_mNum() + _d.get_mNum() + _e.get_mNum();
    };
};

int main() {

    Integer io(2);

    cout << io.get_mNum() << endl;
    cout << io.add(io) << endl;
    cout << io.add(io, io) << endl;
    cout << io.add(io, io, io) << endl;
    cout << io.add(io, io, io, io) << endl;
    cout << io.add(io, io, io, io, io) << endl;

	return 0;
}

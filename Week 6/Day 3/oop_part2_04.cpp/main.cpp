#include <iostream>
#include <string>
using namespace std;

// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.
// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the non virtual one both.
// These should return unique string again.
//
// Create a main() function. In this function, create a ParentClass* pointer and instantiate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a pointer.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*

class ParentClass{
 public:
    virtual string s_virtual(){
        return "Virtual.";
    }
    string s_non_virtual(){
        return "Non-virtual.";
    }

};
class ChildClass: public ParentClass{
 public:
     string s_virtual(){
        return "Virtual overridden.";
     }
     string s_non_virtual(){
         return "Non-virtual overridden.";
     }
};

int main()
{
    ParentClass p;
    cout << "This is first string: " << p.s_virtual() << endl;
    cout << "This is second string: " << p.s_non_virtual() << endl;

    cout << endl;

    ChildClass c;
    cout << "This is first string: " << c.s_virtual() << endl;
    cout << "This is second string: " << c.s_non_virtual() << endl;

    cout << endl;

    ParentClass *a = new ChildClass();

    cout << "This is first string: " << a->s_virtual() << endl;
    cout << "This is second string: " << a->s_non_virtual() << endl;



    return 0;
}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//create an integer vector with the size of 5 and print the 3rd element of it

int main() {

    vector<int> MyVector;

    MyVector.push_back(1);
    MyVector.push_back(3);
    MyVector.push_back(21);
    MyVector.push_back(11);
    MyVector.push_back(17);

    cout << MyVector[2] << endl;

  return 0;
}

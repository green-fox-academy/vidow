#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create an integer vector with the size of 5 and print all elements of it

    vector<int> MyVector;

    MyVector.push_back(1);
    MyVector.push_back(3);
    MyVector.push_back(21);
    MyVector.push_back(11);
    MyVector.push_back(17);

    for (unsigned int i = 0; i < MyVector.size(); i++) {
        cout << MyVector[i] << endl;
    }

  return 0;
}

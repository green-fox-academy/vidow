#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
	//create a vector of integers with the size of 20
	//fill this vector with random numbers from 0 to 10
	//print the items of the vector
  //remove the even numbers, then print the items again

    int size = 20;
	vector<int> MyVector(size);

	for (int i = 0; i < size; i++) {
        MyVector.at(i) = rand() % 10;
        cout << MyVector[i] << " ";
	}

	cout << endl;

    for (int i = 0; i < size; i++) {
        if (MyVector.at(i) % 2 == 0) {
            MyVector.erase(MyVector.begin() + i);
            size--;
            i--;
        }
    }
	for (int i = 0; i < size; i++) {
        cout << MyVector[i] << " ";
	}

  return 0;
}

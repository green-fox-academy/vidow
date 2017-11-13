#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
	//Create a vector of integers
	//reserve place for 10 element, then fill those place with random numbers between 0 and 10

	vector<int> MyVector;

	MyVector.push_back(rand() % 10);
	MyVector.push_back(rand() % 10);
	MyVector.push_back(rand() % 10);
	MyVector.push_back(rand() % 10);
	MyVector.push_back(rand() % 10);
    MyVector.push_back(rand() % 10);
	MyVector.push_back(rand() % 10);
	MyVector.push_back(rand() % 10);
	MyVector.push_back(rand() % 10);
	MyVector.push_back(rand() % 10);

	for (unsigned int i = 0; i < MyVector.size(); i++) {
        cout << MyVector[i] << endl;
	}

  return 0;
}

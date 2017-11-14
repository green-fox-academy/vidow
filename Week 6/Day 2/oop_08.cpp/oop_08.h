#ifndef OOP_08_H
#define OOP_08_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student{
private:
    vector<int> grades;
public:
    Student();
    ~Student();
    unsigned int add_grade(int grade){
        if (grade > 5 || grade < 1) {
            cout << "Invalid grade. Grade must be between 1 and 5. Thank you" << endl;
        }
        else{
            grades.push_back(grade);
        }
    }
    float get_average(){
        float sum = 0;
        float avg = 0;
            for (int i = 0; i < grades.size(); i++) {
                sum = sum + grades[i];
            }
        return avg = sum / grades.size();
    }
};

#endif // OOP_08_H


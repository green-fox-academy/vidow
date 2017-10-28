#include <stdio.h>
#include <stdlib.h>

//TODO:
//Create a structure called "student":
//name of the student
//number of the student's grade - error handling
//type of the student's behavior in an enumeration ("behaviors"):
//- BAD_BEHAVIOR , GOOD_BEHAVIOR
//The student's are stored in an array.
// Write a function that returns with the grade's avarage
// write a function that prints out if the student's grade higher than
//3 and the behavior is bad:
//"(student's name) you are fuckin amazing, please behave good"
//write a function that counts good behaviors, if they have 5 grades:
//return with the count of students

typedef struct student
{
    char name[50];
    unsigned int grade;

}pupil;

int main()
{

    pupil student1;
    pupil student2;
    pupil student3;

    student1.name["Kiss Jakad"];
    student1.grade[5];
    student2.name["Szék Aladár"];
    student2.grade[3];
    student3.name["Lassú Anett"];
    student3.grade[4];

    return 0;
}

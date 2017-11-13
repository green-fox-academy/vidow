#include <iostream>
#include <string>

using namespace std;

// An average Green Fox attendee codes 6 hours daily
// The semester is 17 weeks long
//
// Print how many hours is spent with coding in a semester by an attendee,
// if the attendee only codes on workdays.
//
// Print the percentage of the coding hours in the semester if the average
// work hours weekly is 52

int main()
{
    int avg_coding_total = ((7 * 17) - (17 * 2)) * 6; //or (5 * 17) * 6 //510
    int total_work_hours = 52 * 17; //884
    float prctg_coding = (100.00 / total_work_hours) * avg_coding_total;

    cout << "A Green Fox attendee codes " << avg_coding_total << " hours during a semester which is 85 working days." << endl;
    cout << "The % of coding hours in the semester if the average work hours weekly is 52 is " << prctg_coding << endl;


    return 0;
}

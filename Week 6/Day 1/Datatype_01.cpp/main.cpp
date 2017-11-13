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
    int avg_coding = ((7 * 17) - (17 * 2)) * 6;

    cout << "A Green Fox attendee codes " << avg_coding << " hours during a semester which is 85 working days." << endl;

    return 0;
}

#include <iostream>

using namespace std;
/*
1st syntax
while (Expression)
{
    // your code
}


2nd syntax
do
{
    // Your code
}
while (Expression)
*/

int daysInMonth(int year, int month)
{
    int returnVal = 0;
    switch (month)
    {
        case 2:
            returnVal = (year % 4 == 0) ? 29 : 28; // Ternary statement
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            returnVal = 30;
            break;
        default:
            returnVal = 31;
            break;
    }
    return returnVal;
}

int main()
{
    int month = 0;
    int year = 0;
    int day = 0;

    cout << "Enter the year as 4 digits: ";
    cin >> year;

    cout << "Enter the month as a number (1-12): ";
    cin >> month;

    cout << "Enter the day of the month as a number (1-31): ";
    cin >> day;

    int numDays = 0;

    while(month > 0)
    {
        numDays += daysInMonth(year, month);
        month--;
        if (numDays > 180)
        {
            cout << "Greater than 180 days. Exiting early." <<endl;
            break; // Exit the loop early
        }
    }

    cout << "This is day " << numDays << " of this year" << endl;
    return 0;
}

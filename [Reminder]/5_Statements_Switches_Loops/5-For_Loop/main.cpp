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
    int currentMonth = 0;
    int currentYear = 0;
    int currentDay = 0;

    cout << "Enter the year as 4 digits: ";
    cin >> currentYear;

    cout << "Enter the month as a number (1-12): ";
    cin >> currentMonth;

    cout << "Enter the day of the month as a number (1-31): ";
    cin >> currentDay;

    int numDays = 0;

    for (int month=1; month <currentMonth ; month++)
    {
        numDays +=daysInMonth(currentYear, month);
    }
    numDays += currentDay;

    cout << "This is day " << numDays << " of this year" << endl;
    return 0;
}

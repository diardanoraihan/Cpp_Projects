#include <iostream>

using namespace std;

/*
Ternary statement returns a value based on comparisons.
variable = (expression) ? <true value> : <false value>;

This technique will help you save CPU to be more efficient.
*/

int main()
{
    int month = 0;
    int year = 0;

    cout << "Enter the year as 4 digits: ";
    cin >> year;

    cout << "Enter the month as a number (1-12): ";
    cin >> month;

    int daysInMonth = 0;

//    int febDays = 0;

//    if (year%4 == 0)
//    {
//        febDays = 29;
//    }
//    else
//    {
//        febDays = 28;
//    }

    switch (month)
    {
        case 2:
            daysInMonth = (year % 4 == 0) ? 29 : 28; // Ternary statement
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    cout << "There are " << daysInMonth << " days in this month." << endl;

    return 0;
}

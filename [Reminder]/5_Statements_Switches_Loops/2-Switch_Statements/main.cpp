#include <iostream>

using namespace std;

/*
Switch statement takes only one expression.
- Switch statement allows your code more readable than if-else statement.
- add "break" for each case otherwise it will continue executing any code until it meets the break.
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

    int febDays = 0;

    if (year%4 == 0)
    {
        febDays = 29;
    }
    else
    {
        febDays = 28;
    }

    switch (month)
    {
        case 2:
            daysInMonth = febDays;
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

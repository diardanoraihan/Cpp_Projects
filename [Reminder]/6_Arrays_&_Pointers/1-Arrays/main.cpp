#include <iostream>

/*
An array is a set of variable of the same class.
The array normally refers to the variables as element and can be represented in numerical index.
*/

using namespace std;

int main()
{
    // Initialize the size an array with initial values
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    daysInMonth[0] = 31;
//    daysInMonth[1] = 28;
//    daysInMonth[2] = 31;
//    daysInMonth[3] = 31;
//    daysInMonth[11] = 31;

    // Initialize an array variable without size in two ways (either way works fine)
    char monthName[] = {'A', 'p', 'r', 'i', 'l', '\0'}; // 1st way
    char monthNameB[] = "January"; // 2nd way

    int currentMonth = 3; // April
    int daysThisMonth = daysInMonth[currentMonth];
    cout << "There are " << daysThisMonth << " in " << monthNameB << endl;

    //Other example of Array
    float catalogPrice[100] = {33.33}; //0 will be repeated 99 times
    bool isASaleToday[365] = {true, false, }; // false will be repeated 364 times

    return 0;
}

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

    for (int i=0; i<12 ; i++)
    {
        cout << "There are " << daysInMonth[i] << " days in month " << i+1 << endl;
    }

    return 0;
}

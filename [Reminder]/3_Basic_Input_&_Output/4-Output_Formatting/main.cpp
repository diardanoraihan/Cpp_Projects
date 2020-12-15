#include <iostream>
#include <iomanip>

using namespace std;

/*
1. Output formatting using the standard library called <iomanip> allowing you to make
format changes.

2. use setw() function to set the width between string.

3. setprecision(N) allows you to set your precision to be N significant digits.
- It is NOT N places after decimal!
- i.e:
float grade = 86.1263F;
cout << setprecision(4) << grade;
// 86.13 (4 numbers = 4 significant figures)

Note: if fixed or scientific format is selected, controls the number of digits
after the decimal place, otherwise controls the total number of significant digits

4. setiosflags allows you to modify the output of C++ streams using ios flags.
Available flags:
ios::scientific     output in scientific notation
ios::fixed          output in standard notation
ios::right          output right-justified in output field
ios::left           output left-justified in output field
ios::internal       puts space betwee - or + sign and output
ios::showpos        shows + sign
ios::showpoint      shows decimal point with trailing zeros
ios::skipws         shows output without whitespace
*/


float processLineItem (int qty, const char *description, float price)
{
    float lineTotal = price*qty;

    cout << setiosflags(ios::fixed); // tell ios to use fixed precision

    cout << setw(10) << qty
         << setw(20) << description
         << "  $" << setw(6) << setprecision(2) << price
         << "  $" << setw(6) << setprecision(2) << lineTotal << endl;

    return lineTotal;
}

int main()
{
    float runningTotal = 0;

    cout << setw(10) << "Quantity"
         << setw(20) << "Description"
         << setw(9) << "Price"
         << setw(9) << "Total" << endl;

    runningTotal += processLineItem(3, "Apples", .5F);
    runningTotal += processLineItem(2, "Pranges", .45F);
    runningTotal += processLineItem(1, "Lobster", 21.99F);

    cout << endl;
    cout << "The grocery bill totals $" << runningTotal << endl;

    return 0;
}

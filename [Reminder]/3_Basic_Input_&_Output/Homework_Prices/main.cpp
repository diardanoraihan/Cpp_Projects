#include <iostream>
#include <iomanip> // library for output formatting

using namespace std;

int main()
{
    // Variable declarations
    float price1 = 0, price2 = 0, price3 = 0;
    float total = 0;

    // Inputs
    cout << "Enter a price" << endl;
    cin >>price1;
    cout << "Enter a price" << endl;
    cin >>price2;
    cout << "Enter a price" << endl;
    cin >>price3;

    // Calculations
    total = price1+price2+price3;

    cout << setiosflags(ios::fixed);
    cout << setprecision(2);
    cout << setw(15) << "Price 1 is " << setw(9) << price1 << endl;
    cout << setw(15) << "Price 2 is " << setw(9) << price2 << endl;
    cout << setw(15) << "Price 3 is " << setw(9) << price3 << endl;
    cout << setw(15) << "Total price is " << setw(9) << total << endl;

    return 0;
}

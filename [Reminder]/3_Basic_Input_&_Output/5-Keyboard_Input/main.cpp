#include <iostream>

using namespace std;

/*
cin keyword allows you to take input from keyboard
*/

int main()
{
    int inputA = 0;
    int inputB = 0;
    string myName;

    cout << "Please enter your full name: ";
    getline(cin, myName); // Helper function to get the whole string with white space included

    cout << "Welcome to the number addition program " << myName << " !" <<endl;

    cout << "Please enter the first number: ";
    cin >> inputA;

    cout << "Please enter the second number: ";
    cin >> inputB;

    cout << "The sum of those numbers is " << inputA + inputB;
    return 0;
}

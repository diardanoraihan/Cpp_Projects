#include <iostream>

using namespace std;

/*
Casting means converting between data types;

Be aware that in many cases, you will lose information when casting between data types.
For example, from float to int.
*/

int main()
{
    char myChar = 'A';
    bool myBool = true;
    bool myOtherBool = false;

    int myConvertedChar = (int)myChar;
    int myConvertedBool = (int)myBool;
    int myConvertedOtherBool = (int)myOtherBool;

    char myChar2 = (char)myConvertedChar;
    bool myBool2 = (bool)myConvertedBool;
    bool myOtherBool2 = (bool)myConvertedOtherBool;

    float approxPI = 3.14F;
    int sputnikYear = 1957;

    int convertedPI = (int)approxPI;
    char convertedYear = (char)sputnikYear;

    float approxPI2 = (float)convertedPI;
    int sputnikYear2 = (int) convertedYear;

    return 0;
}

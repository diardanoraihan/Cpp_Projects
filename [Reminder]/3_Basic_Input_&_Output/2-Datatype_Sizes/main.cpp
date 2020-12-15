#include <iostream>
#include <climits>

using namespace std;

/*
For simplicity, we will take a look at unsigned integer.
We are interested in two things:
1. the maximum value our variable can hold;
- It takes CPU a certain amount of time to process a byte of information. The more, the longer it takes.
- So, it's important to choose the right size variable for your application.
- (tradeoff: The max value it can hold vs the number of bytes)
- consider long int to store a larger integer value.
2.
*/

int main()
{
    // Normal section

    int numBytes = 0;
    unsigned int myUnsignedInt = UINT_MAX;
    cout << "The maximum value our integer can hold is " << myUnsignedInt << endl;
    numBytes = sizeof(myUnsignedInt); // It tells us the number of bytes it takes to store that
                                      // particular variable.
    cout << "The number of bytes required to store our integer is " << numBytes << endl << endl;

    // Long Section for larger memory and longer CPU process time

    unsigned long myUnsignedLong = ULONG_MAX;
    cout << "The maximum value our long integer can hold is " << myUnsignedLong << endl;
    numBytes = sizeof(myUnsignedLong);
    cout << "The number of bytes required to store our long integer is " << numBytes << endl << endl;

    unsigned long long myUnsignedLongLong = ULONG_LONG_MAX;
    cout << "The maximum value our long-long integer can hold is " << myUnsignedLongLong << endl;
    numBytes = sizeof(myUnsignedLongLong);
    cout << "The number of bytes required to store our long-long integer is " << numBytes << endl << endl;

    // Short section for less memory use and CPU process time

    unsigned short myUnsignedShort = USHRT_MAX;
    cout << "The maximum value our short integer can hold is " << myUnsignedShort << endl;
    numBytes = sizeof(myUnsignedShort);
    cout << "The number of bytes required to store our short integer is " << numBytes << endl << endl;

    unsigned char myUnsignedByte = UCHAR_MAX;
    cout << "The maximum value our byte can hold is " << (int)myUnsignedByte << endl;
    numBytes = sizeof(myUnsignedByte);
    cout << "The number of bytes required to store our byte is " << numBytes << endl << endl;

    wchar_t myWideChar = WCHAR_MAX;
    cout << "The maximum value our wide char can hold is " << (int)myWideChar << endl;
    numBytes = sizeof(myWideChar);
    cout << "The number of bytes required to store our wide char is " << numBytes << endl << endl;

    return 0;
}

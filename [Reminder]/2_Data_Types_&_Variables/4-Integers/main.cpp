#include <iostream>
#include <climits>

using namespace std;

/*
Integer:
- cannot hold any number with fractional value (decimal point).
- can be signed (positive or negative).
- can be unsigned (only positive).
- can be used to perform math operation.

When we work with Integer, it's important we stick to the range limit.

*/

int main()
{
    int mySignedInt = 6;
    int mySignedInt2 = -6;
    unsigned int myUnsignedInt = 80;

    mySignedInt *= 2;
    mySignedInt2 /= 5;

    cout << "Signed integers can be no larger than " << INT_MAX << endl; //2147483647
    cout << "Signed integers can be no smaller than " << INT_MIN << endl; //-2147483648
    cout << "Unsigned integers can be no larger than " << UINT_MAX << endl; //4294967295
    return 0;
}

#include <iostream>

using namespace std;

/*
Character datatype:
- 1 byte in length
- can hold value from 0 - 255
*/

int main()
{
    // to represent a char, a pair of single quote is a must, not double quote.
    char myCharacter = 'A';
    // 'A' is equal to 65. So, myCharacter = 65 is equal tp myCharacter = 'A'
    myCharacter++;

    char mySecChar = 80;

    cout << "my character is " << myCharacter << endl; // My character is B
    cout << "my character is " << mySecChar << endl;

    for(int i=0; i<255; i++){
        myCharacter = i;
        cout << "the character for " << i << " is " << myCharacter << endl;
    }

    return 0;
}

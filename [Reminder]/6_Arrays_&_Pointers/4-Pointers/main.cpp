/*
Pointers are a way of working with the variables addressing memory
rather than variable itself.

They are useful way of parsing complex data type between function
or quickly iterating through an array of elements.

It is quickly to manipulate the pointer and to find the element by its index.

NOTE: Use Pointer only if it's a must since it's ac complex technique and hard to debug.
If you can find a way to build a program without using a pointer, then pick that way.
But, in some case, there is a case where you could not avoid using pointer. So, bear that in mind.
*/

#include <iostream>

using namespace std;

/*
We will create the same checkerboard like before,
but using pointer technique
*/

void showBoard(char * pSquare) // * means this is pointer (rather than data type, followed by identifier
{
    cout << "+--------+" << endl;
    for (int y=0; y<8; y++)
    {
        cout << "|";
        for (int x=0;x<8;x++)
        {
            char outChar = *pSquare; // create a regular variable to look at the address of pSquare
                                     // and get the value pointed to by that address.
            cout << outChar;
            pSquare++;
        }
        cout << "|" << endl;
    }
    cout << "+--------+" <<endl;
}

int main()
{
    const char RED_SQUARE = ' ';
    const char BLK_SQUARE = '#';
    const char RED_PLAYER = '@';
    const char GRY_PLAYER = 'O';

    // The number of elements in this array is 8*8 = 64
    char checkerboard[8][8] =
    {
        {RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER},
        {RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE},
        {RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER, RED_SQUARE, RED_PLAYER},

        {BLK_SQUARE, RED_SQUARE, BLK_SQUARE, RED_SQUARE, BLK_SQUARE, RED_SQUARE, BLK_SQUARE, RED_SQUARE},
        {RED_SQUARE, BLK_SQUARE, RED_SQUARE, BLK_SQUARE, RED_SQUARE, BLK_SQUARE, RED_SQUARE, BLK_SQUARE},

        {GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE},
        {RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER},
        {GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE, GRY_PLAYER, RED_SQUARE}
    };

    char * pFirstSquare = &checkerboard[0][0];
    // It means let's find the very first element of 2D Array checkerboard
    // and let's get the address of that element (Not placing the element, but the address in memory)


    showBoard(pFirstSquare);

    return 0;
}


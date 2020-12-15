#include <iostream>
#include <iomanip>
using namespace std;

/*
In any algebraic operation, the order is important
*/

int main()
{
    float firstResult = 9.0F - 5 + 3; // 7
    float secondResult = 9.0F/5 * 3; // 5.4
    float thirdResult = 9.0F -1 * 3; // 6

    cout << setiosflags(ios::fixed);
    cout << setprecision(2);
    cout << "First result is " << firstResult << endl;
    cout << "Second result is " << secondResult << endl;
    cout << "Third result is " << thirdResult << endl;
    return 0;
}

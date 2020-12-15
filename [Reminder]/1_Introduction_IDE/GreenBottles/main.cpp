#include <iostream>

using namespace std;

int main()
{
    int greenBottles = 10;
    cout << "There were " << greenBottles << " green bottles"  << endl;
    greenBottles--;
    cout << "There were " << greenBottles << " green bottles"  << endl;
    // We are not able to hit the breakpoint in the code while using release configuration
    return 0;
}

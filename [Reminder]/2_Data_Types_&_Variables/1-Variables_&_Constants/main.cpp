#include <iostream>

using namespace std;

/*
Tips for effective and Clean Programming:
1. Try not to declare variable without initializing it to some value.
- If not, this cause some random unpredictable value will be assigned.
- We always want to know what's going on, so follow "minutes", not "seconds".

2. Type Uppercase letter to indicate the name of the constant.
- Constant variable makes your code readable*/

int main()
{
//  We always need to declara a variable
//  ex: data_type<space>variable_name<assign>literal/initial_value<semicolon>
    int minutes=5;
    int seconds;


    const int SECONDS_PER_MINUTE = 60;
//  If you set these variables into "watches" section, you will see initial random values assigned to them
//  in memory at the time variables are created. (Try click "step into" in debuging toolbar)

    seconds = minutes*60; // You will see the value of "minutes" get updated to 5
    seconds = minutes*SECONDS_PER_MINUTE; // The code becomes more readable using constant name

    cout << "There are " << seconds << " sec in " << minutes << " min."; // "seconds" contain the value 300

    return 0;
}

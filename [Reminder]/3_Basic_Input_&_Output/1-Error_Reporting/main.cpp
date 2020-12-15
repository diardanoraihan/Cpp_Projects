#include <iostream>

using namespace std;

/*
Error Reporting:

- When you run a console, typically it sends messages to a standard output string, meaning
you can see it on a console.

- There is also another string called a standard error string, meaning programs that call your
console application can handle error differently than using standard messages, like sending
them to different file or interpret them in a different way.

*/


int main()
{
    int planetCount = 8;
    bool extraPlanet = true;

    if (extraPlanet){
        planetCount++;
    }

    planetCount++;

    int retVal = 0;

    if (planetCount > 9){
        cerr << "Solar system overflow" << endl;
        retVal = 1; // Return 1 to indicate there was an error.
                    // Report this error in your console app
    }
    else{
        cout << "Greetings, all " << planetCount << " planets." << endl;
        retVal = 0; // Return 0 to show a standard output string in your console application.
    }

    return retVal;
}










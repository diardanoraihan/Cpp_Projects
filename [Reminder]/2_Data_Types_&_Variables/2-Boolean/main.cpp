#include <iostream>

using namespace std;

int main()
{
    int planetCount = 8;
    bool extraPlanet = 1; // boolean variable represent any non zero value as "true"
    // bool extraplanet = true

    if (extraPlanet){
        planetCount++;
    }

    printf("Greetings, all %i Planets.",planetCount);
    return 0;
}

#include <iostream>
/*
--- Number Guess Game ----
Created by Diardano Raihan
*/

using namespace std;

int main()
{
    int highest =100; // highest initial possible guess
    int lowest = 0; // lowest initial possible guess
    int attempts =0; // the initial attempt of the program predict the guess
    char input ='a'; // variable to receive user input

    // Start the program
    cout << "Think of a number between 1 and 100" << endl;

    const int MAX_ATTEMPT = 20; // The maximum attempts for the program to guess

    int guess = lowest + ((highest-lowest)*0.5); // 50 as the initial guess value by the program

    while (attempts <= MAX_ATTEMPT)
    {
        attempts++;
        cout << "I guess " << guess << ". Am I right?" <<endl;
        cout << "'q' to quit, 'y' if correct, 'h' if too high, 'l' if too low" << endl;
        cin >> input; // get input from user

        // User Input validation
        while(input!='q' && input!='Q' && input!='y' && input!='Y' &&
              input!='h' && input!='H' && input!='l' && input!='L')
        {
            cout << "I didn't understand that response." <<endl;
            cin >> input; // get input from user
        }

        // User Input classification
        if (input=='y' || input=='Y')
        {
            cout << "I guessed it in " << attempts << " attempts" <<endl;
            break;
        }
        else if (input =='h' || input=='H')
        {
            highest = guess;
        }
        else if (input =='l' || input =='L')
        {
            lowest = guess;
        }
        else if (input =='q' || input=='Q')
        {
            cout << "You quit. Bye." <<endl;
            break;
        }
        // update the value of guess
        guess = lowest + ((highest-lowest)*0.5);
    }

    // error code if the program has failed guessing and ceased (i.e. reached the maximum attempt).
    if (attempts > MAX_ATTEMPT)
    {
        cerr << "I have been guessing it in " << attempts << " attempts" <<endl;
        cerr << "I am tired. You win!" <<endl;
    }
    return 0;
}

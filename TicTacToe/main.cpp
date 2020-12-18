#include <iostream>

using namespace std;


void displayBoard(char board[9])
{
    cout << endl;
    cout << "Current board state:" << endl;
    cout << endl;

    string SPACES = "       ";

    for (int row=0;row<3;row++) // i.e. row = 1
    {
        // Indent each row with some space for readability
        cout<<SPACES;

        for (int col=0;col<3;col++) // i.e. col 2
        {
            if (col!=2)
            {
                cout<<board[col + row*3];
                cout<<'|';
            }
            else
            {
                cout << board[col + row*3]<<endl; // then access board[2 + (1*3)] = board[5] = '6'
                                                  // and move to new line
            }
        }

        cout<<SPACES;
        if (row!=2)
        {
            cout <<"-+-+-"<<endl; // draw this partition for each row if row is not at the last
        }
        else
        {
            cout<<endl;
        }
    }
}


int main()
{
    // Initialization
    int chosenSquare = 0;
    const char PLAYER_X ='X', PLAYER_O='O';
    char lastPlayer =PLAYER_O, currentPlayer=PLAYER_X;

    char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    cout << "Welcome to TicTacToe game!" <<endl;
    cout << "By: Diardano Raihan" <<endl;

    displayBoard(board);

    for (int session=0; session<9; session++)
    {
        // PLAYER_X will be the first to play
        cout << "Player " << currentPlayer <<", enter a number between 1 and 9: ";
        cin >> chosenSquare;

        // Input validation
        while ((chosenSquare<=0 || chosenSquare>9) || (board[chosenSquare-1]=='X' || board[chosenSquare-1]=='O'))// Print the following message if the input is out of range
        {
            if (chosenSquare<=0 || chosenSquare>9)
            {
                cout <<"Not a valid choice. Try Again."<<endl;
                cout << "Player " << currentPlayer <<", enter a number between 1 and 9: ";
                cin >> chosenSquare;
            }
            else if (board[chosenSquare-1]=='X' || board[chosenSquare-1]=='O')
            {
                cout <<"That square is not available. Try Again."<<endl;
                cout << "Player " << currentPlayer <<", enter a number between 1 and 9: ";
                cin >> chosenSquare;
            }
        }

        if(currentPlayer==PLAYER_X)
        {

            if (board[chosenSquare-1]!='X' && board[chosenSquare-1]!='O')
            {
                board[chosenSquare-1]='X';
            }

            swap(currentPlayer, lastPlayer);; // currentPlayer = PLAYER_O
        }
        else
        {
            if (board[chosenSquare-1]!='X' && board[chosenSquare-1]!='O')
            {
                board[chosenSquare-1]='O';
            }
            swap(currentPlayer, lastPlayer);; // currentPlayer = PLAYER_X
        }

        // Update the board
        displayBoard(board);
        // Validate the board for winning possibility
        // stateGame = checkWinning(board);

        // --------------------------------------------------------------------------------------

        // Vertical inspection - 1st column
        if (board[0]==board[3] && board[3]==board[6])
        {
            cout << "Player " << lastPlayer <<  " wins on the left column!" <<endl;
            break;
        }
        // Vertical inspection - 2nd column
        else if (board[1]==board[4] && board[4]==board[7])
        {
            cout << "Player " << lastPlayer <<  " wins on the middle column!" <<endl;
            break;
        }
        // Vertical inspection - 3rd column
        else if (board[2]==board[5] && board[5]==board[7])
        {
            cout << "Player " << lastPlayer <<  " wins on the right column!" <<endl;
            break;
        }
        // Horizontal inspection - 1st row
        else if (board[0]==board[1] && board[1]==board[2])
        {
            cout << "Player " << lastPlayer <<  " wins on the top row!" <<endl;
            break;
        }
        // Horizontal inspection - 2nd row
        else if (board[3]==board[4] && board[4]==board[5])
        {
            cout << "Player " << lastPlayer <<  " wins on the middle row!" <<endl;
            break;
        }
        // Horizontal inspection - 3rd row
        else if (board[6]==board[7] && board[7]==board[8])
        {
            cout << "Player " << lastPlayer <<  " wins on the bottom row!" <<endl;
            break;
        }
        // Diagonal inspection - descending
        else if (board[0]==board[4] && board[4]==board[8])
        {
            cout << "Player " << lastPlayer <<  " wins on the downward diagonal!" <<endl;
            break;
        }
        // Diagonal inspection - ascending
        else if (board[2]==board[4] && board[4]==board[6])
        {
            cout << "Player " << lastPlayer <<  " wins on the upward diagonal!" <<endl;
            break;
        }
        else if (session==8)
        {
            cout << "Draw. Nobody Wins." <<endl;
        }
    }
    cout << endl;
    return 0;
}

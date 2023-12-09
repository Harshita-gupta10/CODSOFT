#include <iostream>
using namespace std;

char cell[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};


// return game status
// 1 for game is over with result
// -1 for game is in progress
// 0 for game is over and no result

int checkwin()
{
    if (cell[1] == cell[2] && cell[2] == cell[3])

        return 1;
    else if (cell[4] == cell[5] && cell[5] == cell[6])

        return 1;
    else if (cell[7] == cell[8] && cell[8] == cell[9])

        return 1;
    else if (cell[1] == cell[4] && cell[4] == cell[7])

        return 1;
    else if (cell[2] == cell[5] && cell[5] == cell[8])

        return 1;
    else if (cell[3] == cell[6] && cell[6] == cell[9])

        return 1;
    else if (cell[1] == cell[5] && cell[5] == cell[9])

        return 1;
    else if (cell[3] == cell[5] && cell[5] == cell[7])

        return 1;
    else if (cell[1] != '1' && cell[2] != '2' && cell[3] != '3' && cell[4] != '4' && cell[5] != '5' && cell[6] != '6' && cell[7] != '7' && cell[8] != '8' && cell[9] != '9')

        return 0;
    else
        return -1;
}

// board with player mark

void board()
{
    system("cls");
    cout << "Tic Tac Toe" << endl;

    cout << "Player 1 (X)  -  Player 2 (O)" << endl
         << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << cell[1] << "  |  " << cell[2] << "  |  " << cell[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << cell[4] << "  |  " << cell[5] << "  |  " << cell[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << cell[7] << "  |  " << cell[8] << "  |  " << cell[9] << endl;

    cout << "     |     |     " << endl
         << endl;
}


int main()
{
    int player = 1, i, choice;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        if(player == 1)
            mark = 'X';
        else
        {
            mark = 'O';
        }

        if (choice == 1 && cell[1] == '1')

            cell[1] = mark;
        else if (choice == 2 && cell[2] == '2')

            cell[2] = mark;
        else if (choice == 3 && cell[3] == '3')

            cell[3] = mark;
        else if (choice == 4 && cell[4] == '4')

            cell[4] = mark;
        else if (choice == 5 && cell[5] == '5')

            cell[5] = mark;
        else if (choice == 6 && cell[6] == '6')

            cell[6] = mark;
        else if (choice == 7 && cell[7] == '7')

            cell[7] = mark;
        else if (choice == 8 && cell[8] == '8')

            cell[8] = mark;
        else if (choice == 9 && cell[9] == '9')

            cell[9] = mark;
        else
        {
            cout << "Invalid move ";
            player--;
            cin.ignore();
            cin.get();
        }
        i = checkwin();

        player++;
    } while (i == -1);
    board();
    if (i == 1)
        cout << "\aPlayer " << --player << " win ";

    else
        cout << "\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}


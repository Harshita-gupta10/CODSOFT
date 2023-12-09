#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    int randomNum = (rand() % 100) + 1; //0-99 + 1 -> 1- 100
    int guessedNum;
    int temp = 1;
    int tries = 0;
    do
    {
        tries++;
        cout << "Guess a number between 1 to 100 : ";
        cin >> guessedNum;

        if(guessedNum > randomNum)
        {
            cout << "Guess a smaller number" << endl;
        }
        else if(guessedNum < randomNum)
        {
            cout << "Guess a larger number" << endl;
        }
        else
        {
            cout << "Correct guess in " << tries << " tries!" << endl;
        }

        cout << "Wanna Try again? (Enter 1) : ";
        cin >> temp;

    } while(temp == 1 || guessedNum != randomNum);
    
    cout << "Thanks for playing" << endl;
    
   return 0;
}
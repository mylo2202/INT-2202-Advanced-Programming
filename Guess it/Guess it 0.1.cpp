#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int generateRandomNumber(int mode)
{
    switch(mode)
    {
        case 1: return rand() % 10 + 1;
        case 2: return rand() % 100 + 1;
        case 3: return rand() % 1000 + 1;
    }
}

void play()
{
    int mode;
    cout << "Enter difficulty mode (1 - 3): ";
    cin >> mode;

    int number = generateRandomNumber(mode);
    int answer;
    int tries = 1;

    switch(mode)
        {
            case 1:
            {
                cout << "Enter a number between (1 - 10): ";
                break;
            }
            case 2:
            {
                cout << "Enter a number between (1 - 100): ";
                break;
            }
            case 3:
            {
                cout << "Enter a number between (1 - 1000): ";
                break;
            }
        }

    do{
        cin >> answer;
        if(answer > number)
        {
            cout << "Incorrect. Too high. Try again: ";
            tries++;
        }
        else if(answer < number)
        {
            cout << "Incorrect. Too low. Try again: ";
            tries++;
        }
        else cout << "Correct! You have tried " << tries << " time(s).\n";
    }
    while (answer != number);


}


int main()
{
    srand(time(0));
    while(true)
    {
        cout << "GUESS IT!!!\n\n";
        cout << "GAME MODES:\n"
             << "EASY (mode 1): Guess a number between 1 and 10.\n"
             << "MEDIUM (mode 2): Guess a number between 1 and 100.\n"
             << "HARD (mode 3): Guess a number between 1 and 1000.\n\n";
        play();

        char play_again;
        cout << "Play again? (Y/N) ";
        cin >> play_again;
        if(play_again == 'N') break;
        else
        {
            cout << "\n\n\n";
            continue;
        }
    }


    return 0;
}

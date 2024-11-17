#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

void number_guessing()
{
    int number = 0;
    int guess = 0;
    int tries = 0;

    srand(time(0));
    number = (rand() % 100) + 1;

    cout << "***Welcome to the Number Guessing Game!***" << endl;
    do
    {
        cout << "Enter a guess between (1-100): " << endl;
        cin >> guess;
        tries++;
        if (guess > number)
        {
            cout << "Too High!" << endl;
        }
        else if (guess < number)
        {
            cout << "Too Low!" << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number" << endl;
            cout << "It took you " << tries << " attempts" << endl;
            cout<<"*************************************"<<endl;
            break;
        }
    } while (guess != number);
}
int main()
{
    number_guessing();
    return 0;
}
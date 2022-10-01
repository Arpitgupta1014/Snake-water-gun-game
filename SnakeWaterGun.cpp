#include <bits/stdc++.h>
using namespace std;

int snakeWaterGun(char you, char comp)
{
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw // Cases
    // covered: | snake snake |
    // gun gun | water water
    if (you == comp) {
        return 0;
    }

    // Non-draw conditions
    // Cases covered:// snake gun
    // | gun snake | snake water
    // | water sanke | gun water | water gun

    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
}

// Driver Code
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    cout<< "Enter 's' for snake, 'w' for "
        "water and 'g' for gun\n ";
    cin>>you;
    int result = snakeWaterGun(you, comp);
    if (result == 0) {
        cout<< "Game draw!" <<endl;
    }
    else if (result == 1)
    {
        cout<<"You win!"<<endl;
    }
    else
    {
        cout<<"You Lose!"<<endl;
    }
    cout<<"You chose " << you << " and computer chose. " << comp << endl;
    return 0;
}
// this code is provided by harsh sinha username-
// harshsinha03

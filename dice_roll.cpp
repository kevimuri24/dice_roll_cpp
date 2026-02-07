#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(0));

    int player1 = 20;
    int player2 = 20;
    int die1, die2;

    // Game loop
    while (player1 > 0 && player2 > 0)
    {
        // Player 1 rolls
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        int sum = die1 + die2;

        if (sum % 2 == 0)
            player1 += sum;
        else
            player1 -= sum;

        cout << "Player 1 rolled: " << die1 << " and " << die2
             << " (Sum: " << sum << ") | Points: " << player1 << endl;

        // Stop if Player 1 loses
        if (player1 <= 0)
            break;

        // Player 2 rolls
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;

        if (sum % 2 == 0)
            player2 += sum;
        else
            player2 -= sum;

        cout << "Player 2 rolled: " << die1 << " and " << die2
             << " (Sum: " << sum << ") | Points: " << player2 << endl;

        cout << "-----------------------------------" << endl;
    }

    // Determine the loser
    if (player1 <= 0)
        cout << "Player 1 has lost the game!" << endl;
    else
        cout << "Player 2 has lost the game!" << endl;

    return 0;
}

#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include "Dealer.h"

// Function declarations
bool PlayAgain();
void ClearScreen();
void UpperCase(std::string *s);
int main()
{
    //ClearScreen();
    
    std::string playerName;
    std::string computerName = "FAITH CONNORS";
    std::string thirdPlayer = "NATHAN DRAKE";
    std::cout << "Welcome! Before we begin, please enter your name: ";
    std::getline(std::cin, playerName);
    UpperCase(&playerName);
    // Create players
    Player playerOne(playerName);
    Player playerTwo(computerName);
    //Player playerThree(thirdPlayer);
    Dealer myDealer;

    // Add the new player
    myDealer.AddPlayers(&playerOne);
    myDealer.AddPlayers(&playerTwo);
    //myDealer.AddPlayers(&playerThree);
    do
    {
        myDealer.PlayGame();
        myDealer.NewGame();
    } while (PlayAgain());
    myDealer.PrintEndGameStats();
    return 0;
}

bool PlayAgain()
{
    std::string choice;
    char ch;
    std::cout << "\nWould you like to play again? (y/n): ";
    std::getline(std::cin, choice);
    ch = choice[0];

    if (tolower(ch) == 'n')
    {
        return false;
    }
    else if (tolower(ch) == 'y')
    {
        return true;
    }
    else
    {
        std::cout << "Invalid choice, please enter 'y' or 'n'" << std::endl;
        return PlayAgain();
    }

}
// Very cheap way of clearing the console, just spam a bunch of spaces
void ClearScreen()
{
    std::string clear(100, '\n');
    std::cout << clear;
}

void UpperCase(std::string *s)
{
    for (auto it = s->begin(); it != s->end(); ++it)
    {
        *it = toupper(*it);
    }
}
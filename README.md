FiveCardDraw
============

5 card draw sample test.. A console game where you can play a card game with the computer. More of a logic operation test sample, where decision making and processes happen to determine a winner based on the rules of a 5 Card Draw game. 

Prereqs:
========
1. Visual Studios 2012 or later

About:
======

This is a Windows Console Application. It uses some C++11 code (specifically keyword Auto). It should work with (Visual Studios 2012 v110) Platform Toolset and later. Current default configuration is set to Visual Studios 2013 v120 toolset as this is the compiler I used to construct the program. 

Setup:
======
1. If using VS 2012, be sure to set the program's properties Platform Toolset to Visual Studios 2012 v110. 
a. Select Solution Explorer > Project > Right Click and Select Properties (or ALT+ENTER when highlighted)
2. If using VS 2013, it should work and build from opening the solution. 
3. Platform can run in Debug or Release build
4. Ensure you have Win32 as your Configuration in the listbox next to Release/Build selection. 
5. Build the project
6. Run the program

Playing:
========
The only inputs from the user are entering your name when the game first begins, and selecting 'y' or 'n' as your option to continue playing. 

The game will pair you up with a computer, there are two players currently in the setup, but you can comment out the third player as well and build the game to play with three players. The Dealer will display the table, with each player's Name, Hand Category, and Cards.
Ex:
CHRIS CARLOS has HIGHCARD
[KD R] [10S B] [6D R] [4C B] [2H R]

Card's are display in
Rank = King, TEN, ACE, etc. 
SUIT = Diamond, Hearts, Club, Spade
Color = (R)ed, (B)lack

with Highest cards on the left, and lowest cards on the right. ACE is considered 1 by default and appears on the right for displaying. 

When you are finished playing, the game will display each player's Wins, Loss, and Ties. 

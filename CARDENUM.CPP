/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
Card Game with Enumeration (enum).
*********************************************************************/

#include <iostream.h>
#include <conio.h>

enum Suit { clubs, diamonds, hearts, spades };

const int jack = 11;
const int gueen = 12;
const int king = 13;
const int ace = 14;

struct card
{
	int number;         //2 to 10, jack, queen, king,ace
	Suit suit;           //clubs, diamonds, hearts, spades
};
void main()
{
	clrscr();
	card temp, chosen, prize;     //define cards
	int position;
	card card1 = { 7, clubs };    //initialize card1
	cout << "Card 1 is the 7 of clubs\n";

	card card2 = { jack, hearts };  //initialize card2
	cout << "Card 2 is the jack of hearts\n";

	card card3 = { ace, spades };   //initialize card3
	cout << "Card 3 is the ace of spades\n";

	prize = card3;                  //copy this card, to remember it

	cout << "I'm swapping card 1 and card 3\n";
	temp = card3; card3 = card1;  card1 = temp;

	cout << "I'm swapping card 2 and card 3\n";
	temp = card3; card3 = card2;  card2 = temp;

	cout << "I'm swapping card 1 and card 2\n";
	temp = card2; card2 = card1;  card1 = temp;

	cout << "Now, where (1, 2, or 3) is the ace of spades? ";
	cin >> position;
	switch(position)
	{
		case 1:  chosen = card1;  break;
		case 2:  chosen = card2;  break;
		case 3:  chosen = card3;  break;
	}
	if(chosen.number == prize.number && chosen.suit == prize.suit)
		cout << "That's right!  You win!\n";
	else
		cout << "Sorry. You lose.\n";
	getche();
}
/*********************************************************************
Output :

*********************************************************************/

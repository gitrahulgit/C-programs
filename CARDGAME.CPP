/*********************************************************************
		KRISHNA KANT DUBEY
		Sec-2,Hanuman mandir,Bhilai
		( C.G.) 490 006	   Mob.: 9893038337
**********************************************************************
Project No.-
A Card Game.
Cards as Class objects.
*********************************************************************/

#include<iostream.h>

enum Suit { clubs, diamonds, hearts, spades };

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

enum Boolean { false, true };

class card
{
    private:
	int number;
	Suit suit;
    public:
	card()
	{ }
	card(int n, Suit s)
	{
		suit = s;
		number = n;
	}
	void display();
	Boolean isEqual(card);
};

void card :: display()
{
	if(number >= 2 && number <= 10)
		cout << number << " of ";
	else
		switch(number)
		{
			case jack :
				cout << " jack of";
				break;
			case queen:
				cout << " queen of";
				break;
			case king:
				cout << " king of";
				break;
			case ace:
				cout << " ace of";
				break;
		}
		switch(suit)
		{
			case clubs:
				cout << " clubs";
				break;
			case diamonds:
				cout << " diamonds";
				break;
			case hearts:
				cout << " hearts";
				break;
			case spades:
				cout << " spades";
				break;
		}
}

Boolean card :: isEqual(card c2)
{
	return((number == c2.number && suit == c2.suit) ? true : false);
}

void main()
{
	card temp, chosen, prize;
	int pos;
	card card1(7, clubs);
	cout << "\n Card 1 is the ";
	card1.display();

	card card2(jack, hearts);
	cout << "\n Card 2 is the ";
	card2.display();

	card card3(ace, spades);
	cout << "\n Card 3 is the ";
	card3.display();

	prize = card3;

	cout << "\n I'm swapping card 1 & card 3";
	temp = card3;
	card3 = card1;
	card1 = temp;

	cout << "\n I'm swapping card 2 & card 3";
	temp = card3;
	card3 = card2;
	card2 = temp;

	cout << "\n I'm swapping card 1 & card 2";
	temp = card2;
	card2 = card1;
	card1 = temp;

	cout << "\n Now, where (1,2,or3) is the ";
	prize.display();
	cout << " ? ";
	cin >> pos;

	switch(pos)
	{
		case 1:
			chosen = card1;
			break;
		case 2:
			chosen = card2;
			break;
		case 3:
			chosen = card3;
			break;
	}
	if(chosen.isEqual(prize))
		cout << " That's right!!!  You WIN !\n";
	else
		cout << " Sorry!!! You lose.\n";
	cout << "You choose the";
	chosen.display();
	cout << endl;
}
/*********************************************************************
Output :

*********************************************************************/

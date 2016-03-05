#ifndef _DECK_H
#define _DECK_H


#include <algorithm>
#include <vector>
#include "card.h"

class deck {

	public:
		deck();
		//returns the card at the top of the stack
		card* deal();
		//shuffles deck
		void shuffle();
		void print();
	private:
		std::vector<card*> cards;
};

#endif //_DECK_H


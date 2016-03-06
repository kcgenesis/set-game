#ifndef _BOARD_H
#define _BOARD_H

#include "deck.h"
#include "card.h"
#include <vector>
#include <string>


//constitutes the card, deck, and board subclasses.

class board {
	public:
		board();
		int fill();
		void print();
		deck mydeck;
	private:
		card *card_arr[3][4];
		
		

};


#endif //_BOARD_H
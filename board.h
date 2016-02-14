#ifndef _BOARD_H
#define _BOARD_H

#include <vector>
#include <string>

class board {

	public:
		
		board();
		void deal();//fill missing spots in array 
		void shuffle();
		void print();

	private:
		class card {
			public:
				card(int,int,int,int);
				void print();
				bool faceup;
				int id;
				//value 0,1,2.
				int color,shape,number,shading;
		};

		void shuffle(std::vector<card*>);
		card *card_arr[3][4];
		std::vector<card*> deck;
		

};


#endif //_HASH_H
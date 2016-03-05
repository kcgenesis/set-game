#include "board.h"
//#include "deck.h"
#include <ctime>
#include <iostream>
#include <fstream>
#include <sstream>
#include <locale> 
#include <cstdlib>




using namespace std;

int main() {
	board myboard;
	myboard.print();
	myboard.fill();
	myboard.print();
	myboard.mydeck.print();
	//myboard.mydeck.shuffle();
	//myboard.mydeck.print();
	//myboard.fill();
	//myboard.print();
	return 0;
}


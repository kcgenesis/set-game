#include "board.h"
#include <ctime>
#include <iostream>
#include <fstream>
#include <sstream>
#include <locale> 
#include <cstdlib>




using namespace std;

int main()
{
	board myboard;
	myboard.shuffle();
	myboard.deal();
	myboard.print();


	return 0;
}


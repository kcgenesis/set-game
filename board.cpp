#include "board.h"
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

board::board(){
	for(int i=0;i<3;i++) {
		for(int j=0;j<4;j++) {
			card_arr[i][j] = NULL; 
		}
	}
}


void board::fill() {
	for(int i=0;i<3;i++) {
		for(int j=0;j<4;j++) {
			card_arr[i][j] = mydeck.deal();
			/*
				if(!card_arr[i][j]){
					card_arr[i][j] = new card (0,0,0,0);
					card_arr[i][j]->id = 0;
				}
			*/
			
		}
	}
}

void board::print() {
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(card_arr[i][j]){
				card_arr[i][j]->print();	
			}
			else{
				cout<<"[ ]";
			}
		}
		cout<<endl;
	}
	cout<<endl;
}




 


#include "deck.h"
#include <algorithm>
#include <iostream>

using namespace std;
deck::deck() {
	int cardnum = 1;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				for(int l=0;l<3;l++)
				{
					cards.push_back(new card(i+1,j+1,k+1,l+1));
					cards.back()->faceup = false;
					cards.back()->id = cardnum;
					cardnum++;
				}
			}
		}	
	}

}

//returns the card at the top of the stack..
//pop_back does not seem to be destroying the last element.
card* deck::deal(){
	card* rear = cards.back();
	if(rear) {
		cout<<"POPPING BACK"<<endl;
		cards.pop_back();	
	}
	return rear;
	
}

//shuffles deck
void deck::shuffle(){
	random_shuffle (cards.begin(),cards.end());
	/*
		vector<card*>* tmp  = new vector<card*>;
		*tmp = deck;
		int randi;
		for(int i=81;i>0;i--)
		{
			randi = rand() % i + 1;
			deck[(81-i)+1] = tmp->at(randi-1);
			tmp->erase(tmp->begin()+randi-1);
		}
		delete tmp;
	*/
}

void deck::print(){
	for (int i=0;i<81;i++) {
		cards[i]->print();
		cout<<endl;
	}
}





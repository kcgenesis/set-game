#include "board.h"
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

board::card::card(int color_arg,int shape_arg,int number_arg,int shading_arg) 
: color(color_arg),shape(shape_arg),number(number_arg),shading(shading_arg)
{

}

void board::card::print()
{
	cout<<"["	<< color <<","
			 	<< shape <<","
			 	<< number <<","
			 	<< shading <<"]";
}

board::board()
{
	int cardnum = 1;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				for(int l=0;l<3;l++)
				{
					deck.push_back(new card(i,j,k,l));
					deck.back()->faceup = true;
					deck.back()->id = cardnum;
					cardnum++;
				}
			}
		}	
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			card_arr[i][j] = NULL; 
		}
	}
}

void board::print()
{
	cout<<"printing"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(card_arr[i][j])
			{
				card_arr[i][j]->print();	
			}
			else
			{
				cout<<"[ ]";
			}
		}
		cout<<endl;
	}
}



//shuffles deck
void board::shuffle()
{
	cout<<"shuffling"<<endl;
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
}


//deals from deck to card_arr
void board::deal()
{
	int top = 0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			card_arr[i][j] = deck[top];
			top++;
		}
	}

	//erase the range passed by top
}


//shuffles 


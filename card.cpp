#include "card.h"
#include <iostream>
using namespace std;

card::card(int color_arg,int shape_arg,int number_arg,int shading_arg) 
: color(color_arg),shape(shape_arg),number(number_arg),shading(shading_arg)
{
	faceup = false;
	id = 0;
}

void card::print()
{
	cout<<"["<< id <<
				"["	<< color <<","
			 	<< shape <<","
			 	<< number <<","
			 	<< shading <<"]"  <<"]";

}




#include<iostream>
using namespace std;
void howmanystickers(int sides);
main(){
	int length;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>> length;
	howmanystickers(length);
}
void howmanystickers(int sides)
{	int stickers;
	stickers=sides*(6*sides);
	cout<<"Number of stickers needed: "<<stickers;
}
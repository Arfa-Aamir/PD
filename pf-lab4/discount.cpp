#include<iostream>
using namespace std;
void challan(int speed);
main(){
	int checkspeed;
	cout<<"Speed: ";
	cin>> checkspeed;
	challan(checkspeed);
}
void challan(int speed)
{
	if(speed>100)
	{cout<<"Halt... YOU WILL BE CHALLENGED!!!";}
	if(speed<=100)
	{cout<<"Perfect! You're going good.";}
}

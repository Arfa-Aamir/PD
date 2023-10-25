#include<iostream>
using namespace std;
void calculatefuel(float d);
main()
{	float distance;
	cout<<"Enter the distance: ";
	cin>> distance;
	calculatefuel(distance);
}
void calculatefuel(float d)
{	
	float result;
	if(d>100)
	{result=d*100;
	
	cout<<"Fuel needed: "<<result;}
	if(d<100)
	{cout<<"Fuel needed: 100";}
}
	
	
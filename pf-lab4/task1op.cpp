#include<iostream>
using namespace std;
void calculatefuel(float d);
main(){
	float d;
	cout<<"Enter the distance: ";
	cin >> d;
	calculatefuel(d);
}
void calculatefuel(float d)
{
	
	float fuel;
	fuel=d*10;
	cout<<"Fuel needed: "<<fuel<<endl;
}

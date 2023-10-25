#include<iostream>
using namespace std;
void measurement(float inches);
main(){
	float inch;
	cout<<"Enter the measurement in inches: ";
	cin>> inch;
	measurement(inch);
}
void measurement(float inches)
{	float conversion;
	conversion=inches/12;
	cout<<"Equivalent in feet: "<<conversion;
}
#include<iostream>
using namespace std;
main(){
	float voltage;
	cout<<" enter volatge (in volts):";
	cin>> voltage;
	float current;
	cout<<" enter current (in amperes):";
	cin>> current;
	float power;
	power= voltage*current;
	cout<<"The power is "<<power<< "watts";
}
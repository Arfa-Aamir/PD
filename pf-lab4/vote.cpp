#include<iostream>
using namespace std;
void age(int years);
main()
{
	int year;
	cout<<"Enter your age: ";
	cin>> year;
	age(year);
	
}
void age(int years)
{
	if(years>=18)
	cout<<"You are eligible to vote.";
	if(years<18)
	cout<<"You are not eligible to vote.";
}
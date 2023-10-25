#include<iostream>
using namespace std;
void longesttime(int hour,int min);
main()
{

	int hours;
	cout<<"Enter the number of hours: ";
	cin>> hours;
	int mins;
	cout<<"Enter the number of minutes: ";
	cin>> mins;
	longesttime(hours,mins);
}
void longesttime(int hour,int min)
{
	int conh=hour*3600;
	int conm=min*60;
	if(conh>conm)
	{cout<<hour;}
	if(conm>conh)
	{cout<<min;}
}
#include<iostream>
using namespace std;
void timetravel(int hrs,int mins);
main()
{
	int hours;
	cout<<"Enter Hours: ";
	cin>> hours;
	int minutes;
	cout<<"Enter Minutes: ";
	cin>> minutes;
	
	timetravel(hours,minutes);
	
}
void timetravel(int hrs,int mins)
{
	int newmins;
	newmins=mins+15;
	if(newmins>60)
	{int totalmins=newmins-60;
	
	int newhours=hrs+1;
	if(newhours>23)
	{newhours=0;}
	cout<<newhours<<":"<<totalmins;}
	if(newmins<60)
	{cout<<hrs<<":"<<newmins;}
	

}
	
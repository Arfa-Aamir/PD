#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
	int annualholidays;
	cout<<"Holidays: ";
	cin>> annualholidays;
	pet(annualholidays);
}
void pet(int holidays)
{
	int workingdays=365-holidays;
	int minutes=workingdays*63+holidays*127;
	int total;
	total=(30000-minutes);
	
	
	if(total>0)
	{
	
	int con=total/60;
	int result=total-(con*60);
	cout<<"Tom sleeps well"<<endl;
	cout<<con<<" hours and "<<result<<" minutes less for play";}
	if(total<0)
	{
	total=total*(-1);
	int con=total/60;
	int result=total-(con*60);
	cout<<"Tom will run away"<<endl;
	cout<<con<<" hours and "<<result<<" minutes for play";}
}
#include<iostream>
using namespace std;
void covid(int ppl,int tp);
main()
{

	int people;
	cout<<"Number of people in the household: ";
	cin>> people;
	int trolls;
	cout<<"Number of rolls of TP: ";
	cin>> trolls;
	covid(people,trolls);
}
void covid(int ppl,int tp)
{
	int cal=ppl*57;
	int cal2=tp*500;
	int total=cal2/cal;
	if(total>14)
	{cout<<"Your TP will last "<<total<<" days, no need to panic!";}
	if(total<14)
	{cout<<"Your TP will only last "<<total<<" days, buy more!";}	
}	
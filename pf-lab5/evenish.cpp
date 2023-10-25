#include<iostream>
using namespace std;
string evenishoroddish(int digit);
main()
{
	int n1;
	cout<<"Enter a five-digit number: ";
	cin>> n1;
	string total;
	total=evenishoroddish(n1);
	cout<<total;
	
}
string evenishoroddish(int digit)
{
	int q1=digit/10000;
	int r1=digit%10000;
	int q2=r1/1000;
	int r2=r1%1000;
	int q3=r2/100;
	int r3=r2%100;
	int q4=r3/10;
	int r4=r3%10;
	int result=q1+q2+q3+q4+r4;
	if(result%2==0)
	return "Evenish";
	if(result%2==1)
	return "Oddish";
}
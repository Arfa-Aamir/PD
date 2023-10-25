#include<iostream>
using namespace std;
bool truefalse(int digit);
main()
{
	int num1;
	cout<<"Enter a 3-digit number: ";
	cin>> num1;
	bool result;
	result=truefalse(num1);
	cout<<result;
	if(result==true)
	cout<<"The number is syymetrical.";
	if(result==false)
	cout<<"The number is not symmetrical.";
}
bool truefalse(int digit)
{
	int a;
	int b;
	a=digit%10;
	b=digit/100;
	cout<<a;
	cout<<b;
	if(a==b)
	{return true;}
	if(a!=b)
	{return false;}
}
#include<iostream>
using namespace std;
bool truefalse(int n1);
main()
{
	int number1;
	cout<<"Enter a three-digit number: ";
	cin>>  number1;
	bool result;
	result=truefalse(number1);
	if(result==true)
	{
		cout<<"The number is symmetrical."<<endl;
	}
	if(result==false)
	{
		cout<<"The number is not symmetrical."<<endl;
	}
	
}
bool truefalse(int n1)
{
	int a;
	int b;
	a=n1%10;
	b=n1/100;
	cout<<a;
	cout<<b;
	if(a==b)
	{
		return true;
	}
	if(a!=b)
	{
		return false;
	}	
}
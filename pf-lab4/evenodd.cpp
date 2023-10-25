#include<iostream>
using namespace std;
void evenorodd(int digit);
main(){
	int num1;
	cout<<"Enter a number: ";
	cin>> num1;
	evenorodd(num1);
}
void evenorodd(int digit)
{
	if(digit%2==0)
	{cout<<"Number "<<digit<<" is even"<<endl;}
	if(digit%2==1)
	{cout<<"Number "<<digit<<" is odd"<<endl;}
}
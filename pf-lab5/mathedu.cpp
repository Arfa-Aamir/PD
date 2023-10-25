#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float a,b,c;
	float root1,root1a,root2,root2a;
	cout<<"Enter the value af a: ";
	cin>> a;
	cout<<"Enter the value of b: ";
	cin>> b;
	cout<<"Enter the value of c: ";
	cin>> c;
	float det=(b*b)-4*a*c;
	if(det>0)
	{ root1= (-b)+(sqrt(det));
	  root1a=root1/(2*a);
	 root2= (-b)-(sqrt(det));
	 root2a=root2/(2*a);
	cout<<"Solutions: x = "<<root1a<<" and x = "<<root2a; }
	if (det==0)
	{root1=-b/(2*a);
	cout<<"Solutions: x = "<<root1;}
	if(det<0)
	{float real,imaginary;
	 real=-b/(2*a);
	imaginary=sqrt(-det)/(2*a);
	 
	cout<<"Complex Solutions: x = "<<real<<" + "<<imaginary<<"i and x = "<<real<<" - "<<imaginary<<"i";} 
	
}
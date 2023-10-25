#include<iostream>
using namespace std;
void add(int n1,int n2);
void multiply(int n1, int n2);
void subtract(int n1, int n2);
void divide(float n1, float n2);
main(){
	int n1,n2;
	cout<<"Enter 1st number: ";
	cin>> n1;
	cout<<"Enter 2nd number: ";
	cin>> n2;
	char op;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>> op;
	if(op== '+')
	add(n1,n2);
	if(op== '*')
	multiply(n1, n2);
	if(op== '-')
	subtract(n1,n2);
	if(op== '/')
	divide( n1,n2);		
}
	
void add(int n1, int n2) 
{	
	int result=n1+n2;
	cout<<"Addition: "<<result;
}
void multiply(int n1, int n2)
{
		
	int result=n1*n2;
	cout<<"Multiplication: "<<result;
}
void subtract(int n1, int n2)
{	
	int result=n1-n2;
	cout<<"Subtraction: "<<result;
}
void divide(float n1, float n2)
{	
	float result=n1/n2;
	cout<<"Divison: "<<result;
}
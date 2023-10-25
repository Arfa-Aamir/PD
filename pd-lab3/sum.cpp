#include<iostream>
using namespace std;
main(){
	int digit;
	cout<<"Enter a 4-digit number: ";
	cin>> digit;
	int q1,r1;
	q1=digit/10;
	r1=digit%10;
	int q2,r2;
	q2=q1/10;
	r2=q1%10;
	int q3,r3;
	q3=q2/10;
	r3=q2%10;
	int result;
	result=r1+r2+r3+q3;
	cout<<"Sum of the individual digits: "<<result;
}
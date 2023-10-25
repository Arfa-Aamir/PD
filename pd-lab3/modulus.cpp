#include<iostream>
using namespace std;
main(){
	int digits;
	cout<<"Enter a 4-digit number: ";
	cin>> digits;
	int q1,r1;
	r1=digits%10;
	q1=digits/10;
	int q2,r2;
	q2=q1/10;
	r2=q1%10;
	int q3,r3;
	q3=q2%10;
	r3=q2/10;
	int sum;
	sum=r1+r2+q3+r3;
	cout<<"Sum of the individual digits: "<< sum;
}
	
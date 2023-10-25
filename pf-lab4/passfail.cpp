#include<iostream>
using namespace std;
void score(int marks);
main(){
	int benchmark;
	cout<<"Enter your score: ";
	cin>> benchmark;
	score(benchmark);
}
void score(int marks)
{	
	if(marks>50)
	cout<<"Pass";
	if(marks<=50)
	cout<<"Fail";
}
	
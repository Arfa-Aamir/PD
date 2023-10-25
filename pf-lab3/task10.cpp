#include<iostream>
using namespace std;
main(){
	int wins,draws,losses;
	cout<<" enter the number of wins:";
	cin>> wins;
	cout<<" enter the number of losses:";
	cin>> losses;
	cout<<" enter the number of draws:";
	cin>> draws;
	int result;
	result=wins*3+losses*2+draws*2;
	cout<<" pakistan has obtained "<< result <<" points in the asia cup tournament";
}
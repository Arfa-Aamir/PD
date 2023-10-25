#include<iostream>
using namespace std;
main(){
	float impostercount;
	cout<<"Enter Imposter Count: ";
	cin>> impostercount;
	float playercount;
	cout<<"Enter Player Count: ";
	cin>> playercount;
	float result;
	result=100*(impostercount/playercount);
	cout<<"Chance of being an imposter: "<<result<<"%";
}
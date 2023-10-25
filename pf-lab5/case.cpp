#include<iostream>
using namespace std;
string checkalphabet(char num1);
main(){

	char number1;
	string catcher;
	cout<<"Enter a character (A/a): ";
	cin>> number1;
	catcher=checkalphabet(number1);
	cout<<catcher;
}
string checkalphabet(char num1)
{
	
	if(num1=='A')
	{return "You have entered Capital A";}
	if(num1=='a')
	{return "You have entered small a";}


}
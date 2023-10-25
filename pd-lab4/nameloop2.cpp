#include<iostream>
using namespace std;
void print(string);
main(){
while(true)
	{string myname;
	cout<<"Enter your name: " ;
	cin>> myname;
	print(myname);}
}
void print(string name)
{
	cout<<"enter your name: "<<name<<endl;
}
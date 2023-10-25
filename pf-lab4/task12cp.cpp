#include<iostream>
using namespace std;
void store(string day,float total);
main(){
 	while(true){
	string day;
	cout<<"enter the day of purchase: ";
	cin>> day;
	float purchase;
	cout<<"total purchase amount: $";
	cin>> purchase;
	store(day,purchase);}
}
void store(string day,float total)
{
	float payable;
	payable=total*0.1;
	float result;
	result=total-payable;
	if(day=="sunday")
	{cout<<"payable amount is: $"<<result<<endl;}
	payable=total*0.5;
	result=total-payable;
	if(day!="sunday")
	{cout<<"payable amount is: $"<<result<<endl;}
}
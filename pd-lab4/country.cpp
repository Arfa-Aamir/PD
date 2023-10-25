#include<iostream>
using namespace std;
void countries(string name,float price);
main()
{
	string nameofcon;
	cout<<"Enter the country's name: ";
	cin>> nameofcon;
	float ticket;
	cout<<"Enter the ticket price in dollars: $";
	cin>> ticket;
	countries(nameofcon,ticket);
}
void countries(string name,float price)
{	
	if(name=="Pakistan")
	{float discount=price*0.05;
	float total=price-discount;
	cout<<"Final ticket price after discount: $"<<total;}

	if(name=="Ireland")
	{float discount=price*0.10;
	float total=price-discount;
	cout<<"Final ticket price after discount: $"<<total;}

	if(name=="India")
	{float discount=price*0.20;
	float total=price-discount;
	cout<<"Final ticket price after discount: $"<<total;}

	if(name=="England")
	{float discount=price*0.30;
	float total=price-discount;
	cout<<"Final ticket price after discount: $"<<total;}

	if(name=="Canada")
	{float discount=price*0.45;
	float total=price-discount;
	cout<<"Final ticket price after discount: $"<<total;}
}




 

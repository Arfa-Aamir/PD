#include<iostream>
using namespace std;
int calculateMoney(int age, int price, int pricetoy);
main()
{
	int age;
	cout<<"Enter  Lilly's age: ";
	cin>> age;
	int price;
	cout<<"Enter the price of the washing machine: ";
	cin>> price;
	int pricetoy;
	cout<<"Enter the unit price of each toy: ";
	cin>> pricetoy;
	int result;
	result=calculateMoney( age,  price, pricetoy);
}
int calculateMoney(int age, int price, int pricetoy)
{
	int savedmoney=0;
	int recievedmoney=10;
	int  total;
	int count=0;
	for(int years=2; years<=age; years+=2){

	
	savedmoney= (savedmoney + recievedmoney) - 1;
	recievedmoney+=10;
		
}	
	for(int years=1; years<age; years+=2)

	{
		count++;
		           }

	
	total= savedmoney + (count * pricetoy);
	
	
	if(total>price)
{	
	total=total - price;
	cout<<"Yes!"<<endl;
	cout<<total;

} 
	else if(total<price)
{
	total=price - total;
	cout<<"No!"<<endl;
	cout<<total;
}
}
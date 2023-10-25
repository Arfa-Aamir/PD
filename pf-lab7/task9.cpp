#include<iostream>
using namespace std;
int calculatePrice(int money, int year);
main()
{
	int money;	
	cout<<"Enter Money: ";
	cin>> money;
	int year;
	cout<<"Enter year: ";
	cin>> year;
	int result;
	result=calculatePrice(money, year);
		if(result>0)
{
	cout<<"Yes! He will live carefree life and will have "<<result<<" dollars left.";
}
	else{
	    cout<<"He will need "<< -(result)<< " dollars to survive.";}
}

int calculatePrice(int money, int year)
{
	int age=18;
	int cen=1800;
	int expenses=0;
	int total;
	while(cen<=year){
    if(cen%2==0){
	expenses+=12000;}
	else{
	expenses+= 12000 + (50*age);
    }
	
	cen++;
	age++;
	
	
}
	
	total=money - expenses;	
	return total;
	
}
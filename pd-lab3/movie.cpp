#include<iostream>
using namespace std;
main(){
	string moviename;
	cout<<"Enter the movie name: ";
	cin>> moviename;
	int aticketp;
	cout<<"Enter the adult ticket price: $";
	cin>> aticketp;
	int cticketp;
	cout<<"Enter the child ticket price: $";
	cin>> cticketp;
	int soldaticket;
	cout<<"Enter the number of adult tickets sold: ";
	cin>> soldaticket;
	int soldcticket;
	cout<<"Enter the number of child tickets sold: ";
	cin>> soldcticket;
	int charity;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>> charity;
	cout<<endl;
	
	
	cout<<"Movie: "<<moviename<< endl;

	int total;
	total=aticketp*soldaticket+cticketp*soldcticket;
	cout<<"Total amount generated from ticket sales: $"<<total<< endl;

	float charityd;
	charityd=total*0.1;
	cout<<"Donation to charity (10%): $"<<charityd<<endl;


	float remaining;
	remaining=total-charityd;
	cout<<"Remaining amount after donation: $"<<remaining; 
}
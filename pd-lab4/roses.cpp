#include<iostream>
using namespace std;
void flowershop(float redrose,float whiterose,float tulip);
main()
{
	float redflo;
	cout<<"Red Rose: ";
	cin>> redflo;
	float whiteflo;
	cout<<"White Rose: ";
	cin>> whiteflo;
	float tulips;
	cout<<"Tulips: ";
	cin>> tulips;
	flowershop(redflo,whiteflo,tulips);
}

void flowershop(float redrose,float whiterose,float tulip)
{
	float total=(redrose*2.00)+(whiterose*4.10)+(tulip*2.50);
	cout<<"Original Price: $"<<total<<endl;
	float discount=total*0.2;
	float result=total-discount;
	if(total>200)
	{cout<<"Price after discount: $"<<result;}
	if(total<200)
	{cout<<"No discount applied.";}
}

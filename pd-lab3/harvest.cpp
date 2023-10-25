#include<iostream>
using namespace std;
main(){
	float vegprice;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>> vegprice;
	float fruitprice;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>> fruitprice;
	int totalveg;
	cout<<"Enter total kilograms of vegetables: ";
	cin>> totalveg;
	int totalfruit;
	cout<<"Enter total kilograms of fruits: ";
	cin>> totalfruit;
	float total;
	total=vegprice*totalveg+fruitprice*totalfruit;
	cout<<"Total earnings in Rupees (Rps): "<<total/1.94;
} 
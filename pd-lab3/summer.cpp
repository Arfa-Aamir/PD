#include<iostream>
using namespace std;
main(){
	float fertilizerbag;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>> fertilizerbag;
	float costbag;
	cout<<"Enter the cost of the bag: $";
	cin>> costbag;
	float area;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>> area;
	float fertilizerperp;
	fertilizerperp=costbag/fertilizerbag;
	cout<<"Cost of fertilizer per pound: $"<<fertilizerperp<< endl;
	float fertilizerpers;
	fertilizerpers=costbag/area;
	cout<<"Cost of fertilizing per square foot: $"<< fertilizerpers<< endl;

}  

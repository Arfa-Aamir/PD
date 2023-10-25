#include <iostream>
using namespace std;
main(){
	int rupee=200;
	int inputvalue;
	int convertedvalue;
	cout<<" enter any value";
	cin>> inputvalue;
	cout<<" $1= "<< rupee << "rupees" <<endl; 
	convertedvalue= rupee * inputvalue;
	cout<< convertedvalue;
}
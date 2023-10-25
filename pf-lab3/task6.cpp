#include <iostream>
using namespace std;
main(){

	int mb=1024;
	int kb=1024;
	int byte=8;
	int result;
	cout<<" Enter the size in megabytes (MB): ";
	cin>>result;
	int convertedvalue;
	convertedvalue=result*mb*kb*byte;
	cout<<result<<" MB is equivalent to "<< convertedvalue <<" bits.";
}

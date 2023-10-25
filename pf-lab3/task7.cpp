#include<iostream>
using namespace std;
main(){
	
	int result;
	cout<<" enter the number of hours:";
	cin>> result;
	int conversion;
	conversion=3600 * result;
	cout<<" hours is equivalent to:" << conversion;
}
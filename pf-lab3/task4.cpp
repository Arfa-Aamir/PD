#include <iostream>
using namespace std;
main(){


cout<<" enter charge(q) in coulombs:";
int charge;
cin>> charge;
cout<<" enter time(t) in seconds:";
int time;
cin>> time;
int current;
current=charge/time;
cout<<"current(i) in amperes: "<< current;
}

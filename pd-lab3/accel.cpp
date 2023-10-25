#include<iostream>
using namespace std;
main(){
	float initialv;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>> initialv;
	float accelration;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>> accelration;
	float time;
	cout<<"Enter Time (s): ";
	cin>> time;
	float finalv;
	finalv=(accelration*time)+initialv;
	cout<<"Final Velocity (m/s): "<< finalv;
}
	
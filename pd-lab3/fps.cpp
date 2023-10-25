#include<iostream>
using namespace std;
main(){
	int minutes;
	cout<<"Number of Minutes: ";
	cin>> minutes;
	int mininsec;
	mininsec=minutes*60;
	float fps;
	cout<<"Frames per Second: ";
	cin>> fps;
	float fpsinsec;
	fpsinsec=fps*mininsec;
	cout<<"Total Number of Frames: "<<fpsinsec;
}
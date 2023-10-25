#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float base;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>> base;
	float angle;
	cout<<"Enter the angle of elevation (in degrees): ";
	cin>> angle;
	float elevation=angle/57.2958;
	cout<<"The height of the tree is: "<<tan(elevation)*base<<" feet";
}
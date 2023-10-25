#include <iostream>
using namespace std;
main(){
	string name;
	float matric,inter,ecat,aggregate;
	cout<<" enter the student's name: ";
	cin>> name;
	cout<<" enter matriculation marks(out of 1100): ";
	cin>> matric;
	cout<<" enter intermediate marks(out of 550):";
	cin>> inter;
	cout<<" enter ecat marks(out of 400):";
	cin>> ecat;
	float matricper,interper,ecatper;
	matricper=matric/1100*0.1;
	interper=inter/550*0.4;
	ecatper=ecat/400*0.5;
	aggregate=(matricper+interper+ecatper)*100;
	cout<<" enter your aggregate: " << aggregate;
}

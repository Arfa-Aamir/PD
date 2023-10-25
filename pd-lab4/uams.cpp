#include <iostream>
using namespace std;
void printmenu();
void calculateagg(string namea,string nameb,float matricm1,float matricm2,float interm1,float interm2,float ecatm1,float ecatm2);
void comparemarks(string namea,float ecatm1,string nameb,float ecatm2);
main()
{
	printmenu();
	string name1;
	cout<<"Enter 1st student name: ";
	cin>> name1;
	float matricmarks1;
	cout<<"Enter 1st student matric marks: ";
	cin>> matricmarks1;
	float intermarks1;
	cout<<"Enter 1st student inter marks: ";
	cin>>intermarks1;
	float ecatmarks1;
	cout<<"Enter 1st student ecat marks: ";
	cin>> ecatmarks1;
	
	string name2;
	cout<<"Enter 2nd student name: ";
	cin>> name2;
	
	float matricmarks2;
	cout<<"Enter 2nd student matric marks: ";
	cin>> matricmarks2;
	
	float intermarks2;
	cout<<"Enter 2nd student inter marks: ";
	cin>>intermarks2;
	
	float ecatmarks2;
	cout<<"Enter 2nd student ecat marks: ";
	cin>>ecatmarks2;
	calculateagg(name1, name2, matricmarks1,matricmarks2, intermarks1,intermarks2, ecatmarks1,ecatmarks2);
	comparemarks(name1, ecatmarks1 ,name2, ecatmarks2);
}
void printmenu()
{
	cout<<"University of Engineering and Technology"<<endl;
}
void calculateagg(string namea,string nameb,float matricm1,float matricm2,float interm1,float interm2,float ecatm1,float ecatm2)
{	
	
	float matric1=(matricm1/1100*0.3);
	float matric2=(matricm2/1100*0.3);
	float inter1=(interm1/550*0.3);
	float inter2=(interm2/550*0.4);
	float ecat1=(ecatm1/400*0.4);
	float ecat2=(ecatm2/400*0.4);
	float total1=(matric1+inter1+ecat1)*100;
	cout<<"Aggregate of "<<namea<< " is "<<total1<<endl;
	float total2=(matric2+inter2+ecat2)*100;
	cout<<"Aggregate of "<<nameb<<" is "<<total2<<endl;
}
void comparemarks(string namea,float ecatm1,string nameb,float ecatm2)
{
	if(ecatm1>ecatm2)
	{cout<<"1st roll number is "<<namea;}
	if(ecatm2>ecatm1)
	{cout<<"1st roll number is "<<nameb;}
}

	
	
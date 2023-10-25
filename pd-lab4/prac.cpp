#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void playermove(int x,int y);
void gotoxy(int x, int y);

main()
{
	int x=5, y=4;
	system("cls");
	printmaze();
	while (true)
	{
		playermove(x, y);
		y= y+1;
		if(y>5){
	
		 y=4;}
	}
}

void printmaze()
{
cout<<"####################"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"####################"<<endl;
}

void playermove(int x,int y)
{	gotoxy(x, y);
	cout<<"p";
	Sleep(100);
	gotoxy(x, y);
	cout<< " ";
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X =x;
 coordinates.Y =y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
	

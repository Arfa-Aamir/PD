#include<iostream>
using namespace std;
string checkPointPosition(int h, int x, int y);
main()
{
    int h;
    cout<<"Enter height: ";
    cin>> h;
    int x;
    cout<<"Enter x coordinate: ";
    cin>> x;
    int y;
    cout<<"Enter y coordinate: ";
    cin>> y;
    string result;
    result=checkPointPosition(h, x, y);
    cout<<result;
}
string checkPointPosition(int h, int x, int y)
{
    
    if(x<= 2*h && y<=4*h){
         return "Inside";
    }
    if((x==0 || x==h || x==2*h || x==3*h) && (y==0 || y==h || y==2*h || y==3*h || y==4*h )){
      return "Border";
    }
    else{
        return "Outside";
    }
    
}
#include<iostream>
#include<string>
using namespace std;
float pyramid(float lenght, float width, float height, string unit);
main()
{   float len;
    cout<<"Enter the lenght of the pyramid (in meters): ";
    cin>> len;
    float wid;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>> wid;
    float high;
    cout<<"Enter the height of the pyramid: ";
    cin>> high;
    string unit;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>> unit;
   
    float output;
    output= pyramid(len,wid,high,unit);
    string result=to_string(output);
    cout<<"The volume of the pyramid is: "<<result<<" cubic meters";

}
float pyramid(float lenght, float width, float height,string unit)
{   float result;
    result=(lenght*width*height)/3;
    return result;
    if(unit=="millimeters")
    {
        float result1=result*(1000*1000*1000);
    }
    if(unit=="centimeters")
    {
        float result2=result*(100*100*100);
    }
    if(unit=="kilometers")
    {
        float result3=result/(1000*1000*1000);
    }

}
#include<iostream>
using namespace std;
float lowestPrice(int kilometers, string day);
main()
{
    int kilometers;
    cout<<"Enter the number of kilometers: ";
    cin>> kilometers;
    string day;
    cout<<"Enter the period of the day (day/night): ";
    cin>> day;
    float result;
    result=lowestPrice(kilometers, day);
    cout<<"Lowest price for "<<kilometers<<" kilometers: "<<result<<" EUR";
}
float lowestPrice(int kilometers, string day)
{
    float calculation;
    if(kilometers<=20 && day=="day")
    {
        calculation=(kilometers * 0.79) + 0.70;
    }
    if(kilometers<=20 && day=="night")
    {
        calculation=(kilometers * 0.90) + 0.70;
    }
    if((kilometers>=20 && kilometers<=100) && (day=="day" || day=="night"))
    {
        calculation=kilometers*0.09;
    }
    if(kilometers>=100 && (day=="day" || day=="night"))
    {
        calculation=kilometers*0.06;
    }
    return calculation;
}
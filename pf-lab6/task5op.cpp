#include<iostream>
using namespace std;
float payable(string day, string month, float amount);
main()
{
    string day;
    cout<<"Enter Purchase Day: ";
    cin>> day;
    string month;
    cout<<"Enter Purchase Month: ";
    cin>> month;
    float amount;
    cout<<"Enter Purchase Amount: ";
    cin>> amount;
    float result;
    result=payable(day, month, amount);
    cout<<"Payable Amount after discount: "<<result;
}
float payable(string day, string month, float amount)
{
    float payable=amount;
    if(day=="Sunday" && month=="October")
    {
        payable=amount -( amount*0.1);
    }
    if(day=="Sunday" && month!="October")
    {
        payable=amount - (amount*0.05);
    }
    return payable;
}
#include<iostream>
#include<string>
using namespace std;
float taxcalculator(char type,float price);
main()
{
    char vehicletype;
    cout<<"Enter the vehicle type code (M,E,S,V,T): ";
    cin>> vehicletype;
    float price;
    cout<<"Enter the price of the vehicle: $";
    cin>> price;
    float total;
    total=taxcalculator(vehicletype,price);
    cout<<"The final price of type "<<vehicletype<<" after adding the tax is $"<<to_string(total);

}
float taxcalculator(char type,float price)
{   float taxamount;
    if(type=='M')
     {taxamount=price*0.06;}
     if(type=='E')
     {taxamount=price*0.08;}
     if(type=='S')
     {taxamount=price*0.1;}
     if(type=='V')
     {taxamount=price*0.12;}
     if(type=='T')
     {taxamount=price*0.15;}
    float finalprice=price+taxamount;
    return finalprice;
}
#include<iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2);
main()
{
    int n1;
    cout<<"Enter the first number: ";
    cin>> n1;
    int n2;
    cout<<"Enter the second number: ";
    cin>> n2;
    int result;
    result=calculateGCD(n1, n2);
    int result2;
    result2=calculateLCM( n1,  n2);
    cout<<"GCD: "<<result<<endl;
    cout<<"LCM: "<<result2;
}
int calculateGCD(int number1, int number2)
{
   int greater;
    int gcd;
   if(number1> number2)
   {
    greater=number1;
   }
    else{
    greater=number2;
   }
   for(int i=1; i<greater; i++)
   {
       
        if(number1%i==0 && number2%i==0)
        {
            gcd=i;
        }
        
   }
   return gcd;
   
}
int calculateLCM(int number1, int number2)
{
    int gcd=calculateGCD(number1, number2);
    int lcm=(number1 * number2)/gcd;
    return lcm;

}
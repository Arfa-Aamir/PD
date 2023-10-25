#include<iostream>
using namespace std;
int frequencyChecker(int num, int digit);
main()
{
    int number;
    cout<<"Enter a number: ";
    cin>> number;
    int number2;
    cout<<"Enter a digit to check: ";
    cin>> number2;
    int result;
    result=frequencyChecker( number, number2);
    cout<<"Frequency: "<<result;
}
int frequencyChecker(int num, int digit)
{
    int count=0;
    int ans;
    while(num!=0){
        ans=num%10;
        if(ans==digit)
    {
        count++;
    }
   
    num=num/10;
    }
    
    return count;
}
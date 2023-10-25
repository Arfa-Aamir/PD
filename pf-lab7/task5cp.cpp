#include<iostream>
using namespace std;
int digitSum(int number);
main()
{
    int num;
    cout<<"Enter a digit: ";
    cin>> num;
    int result;
    result=digitSum(num);
    cout<<"Sum of digits: "<<result;
}
int digitSum(int number)
{
    int sum=0;
    int mod;
    while(number!=0)
    {
        mod=number%10;
        sum=sum + mod;
        number=number/10;
    }
    return sum;
}
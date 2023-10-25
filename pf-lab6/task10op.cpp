#include<iostream>
using namespace std;
bool areSameNumber(int n1, int n2, int n3);
main()
{
    int num1, num2 , num3;
    cout<<"Enter the first number: ";
    cin>> num1;
    cout<<"Enter the second number: ";
    cin>> num2;
    cout<<"Enter the third number: ";
    cin>> num3;
    bool result;
    result=areSameNumber(num1, num2, num3);
    cout<<result;
}
bool areSameNumber(int n1, int n2, int n3)
{
    if(n1==n2 && n1==n3)
    {
        return true;
    }
    else
    {
        return false;
    }
}
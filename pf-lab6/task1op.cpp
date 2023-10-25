#include<iostream>
using namespace std;
int trueFalse(int n1,int n2);
main()
{
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>> num1;
    cout<<"Enter the second number: ";
    cin>> num2;
    int result;
    result=trueFalse(num1, num2);
    cout<<result;
}
int trueFalse(int n1,int n2)
{
    if(n1>n2)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
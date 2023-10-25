#include<iostream>
using namespace std;
int findGreatest(int n1, int n2, int n3);
main()
{
    int num1,num2,num3;
    cout<<"Enter the first number: ";
    cin>> num1;
    cout<<"Enter the second number: ";
    cin>> num2;
    cout<<"Enter the third number: ";
    cin>> num3;
    int result;
    result=findGreatest(num1, num2, num3);
    cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<result;
    }
    int findGreatest(int n1, int n2, int n3)
    {
        if(n1>n2 && n1>n3)
        {
            return n1;
        }
        if(n2>n1 && n2>n3)
        {
            return n2;
        }
        if(n3>n1 && n3>n2)
        {
            return n3;
        }
    }
#include<iostream>
using namespace std;
void add(int n1,int n2);
main()
{
    int number1;
    cout<<"Enter number 1: ";
    cin>> number1;
    int number2;
    cout<<"Enter number 2: ";
    cin>> number2;
    add(number1,number2);
}
void add(int n1,int n2)
{
    cout<<"Sum is "<<n1 + n2;
}
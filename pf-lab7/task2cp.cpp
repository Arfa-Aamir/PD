#include<iostream>
using namespace std;
void generateFibonacci(int length);
main()
{
    int len;
    cout<<"Enter the lenght of Fibonacci series: ";
    cin>> len;
    generateFibonacci(len);
}
void generateFibonacci(int length)
{
    int n1=0, n2=1, next;
    for(int i=1; i<=length; i++){
       if(i == length){ 
        cout<<n1;}
        else{
            cout<<n1<<", ";
        }
        next= n1 + n2;
        n1=n2;
        n2=next;
    }
}
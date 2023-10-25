#include<iostream>
using namespace std;
void printTable(int number);
main(){
    int num;
    cout<<"Enter a number: ";
    cin>> num;
    printTable(num);
    
}
void printTable(int number)
{
    int mul=1;
    for(int i=1; i<=10; i=i + 1){
        mul = i * number;
        cout<<number<<" X "<<i<<" = "<<mul<<endl;
    }
    
}
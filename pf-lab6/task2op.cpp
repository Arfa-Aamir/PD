#include<iostream>
using namespace std;
bool parityAnalysis(int digit);
main()
{
    int number;
    cout<<"Enter a 3-digit number: ";
    cin>> number;
    bool result;
    result=parityAnalysis(number);
    cout<<result;
}
bool parityAnalysis(int digit)
{
    int n1;
    n1=digit%100;

    int n2=digit/100;
    
    int n3=n1%10;
    
    int n4=n1/10;
    
    int total=n4 + n2 + n3;
    if(total%2==0 && digit%2==0)
    {
        return true;
    }
    if(total%2==1&&digit%2==1)
    {
        return false;
    }

}
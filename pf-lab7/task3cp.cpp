#include<iostream> 
using namespace std;
int totalDigits(int number);
main(){
    int number;
    cout<<"Enter a number: ";
    cin>> number;
    int result;
    result=totalDigits(number);
    cout<<"Total number of digits: "<<result;
}
int totalDigits(int number)
{
    int count=0;
     if(number==0){
           count=1;
        }
    else{
    while(number>0){
        count++;
       number= number/10;
       int number2= number%10;
    }
        
    }
      return count;
     
    
}
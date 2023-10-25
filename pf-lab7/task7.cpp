#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"Enter numbers count: ";
    cin>> number;
    float count1=0;
    float count2=0;
    float count3=0;
    float count4=0;
    float count5=0;
    for(int i=1; i<=number; i++){
        int num;
        cout<<"Enter a number: ";
        cin>> num;
    
    
    if(num>=1 && num<200){
        count1++;
        
    }
     else if(num>=200 && num<=399){
        count2++;
    }
    else if(num>=400 && num<=599){
        count3++;
    }
    else if(num>=600 &&num<=799){
        count4++;
    }
    else if(num>=800 && num<=1000){
        count5++;
    }
    }
    float p1, p2, p3, p4, p5;
    p1= (count1 * 100)/number;
    p2= (count2 * 100)/number;
    p3= (count3 * 100)/number;
    p4= (count4 * 100)/number;
    p5= (count5 * 100)/number;
    cout<<p1<<"%"<<endl;
    cout<<p2<<"%"<<endl;
    cout<<p3<<"%"<<endl;
    cout<<p4<<"%"<<endl;
    cout<<p5<<"%"<<endl;
    
}  

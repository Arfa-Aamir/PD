#include<iostream>
using namespace std;
char grade(int marks);
main(){
    int marks;
    cout<<"Enter the marks: ";
    cin>> marks;
    char result;
    result=grade(marks);
    cout<<"Grade: "<<result;
}
char grade(int marks){
    
    if(marks<50){
        return 'F';
        
    }
    if(marks>51 && marks<=60){
        return 'E';
       
    }
    if(marks>60 && marks<=70){
        return 'D';
    
    }
    if(marks>70 && marks<=80){
        return 'C';
        
    }
    if(marks>80 && marks<=85){
         return 'B';
        
    }
    if(marks>85){
        return 'A';
        
    }
    
}

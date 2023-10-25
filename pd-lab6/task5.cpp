#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string day, double
quantity);
main(){
    string fruit;
    cout<<"Enter the fruit name: ";
    cin>> fruit;
    string day;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>> day;
    double quantity;
    cout<<"Enter the quantity: ";
    cin>> quantity;
    float result;
    if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday" || day=="Sunday" || day=="Saturday" && (fruit=="orange" || fruit=="banana" || fruit=="apple" || fruit=="kiwi" || fruit=="grapefruit" || fruit=="grapes"|| fruit=="pineapple") )
    { 
    result=calculateFruitPrice(fruit, day, quantity);
    cout<<result;
    }
    
    else{
        cout<<"Error";
    }
}
float calculateFruitPrice(string fruit, string day, double
quantity){
    float output;
    if(fruit=="orange" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday")){
        output=quantity * 0.85;
        
    }
    if(fruit=="orange" && (day=="Sunday" || day=="Saturday")){
        output=quantity * 0.90;
    }
    if(fruit=="banana" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday") ){
        output=quantity * 2.50;
    }
    if(fruit=="banana" && (day=="Sunday" || day=="Saturday")){
        output=quantity * 2.70;
    }
    if(fruit=="apple" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday")){
        output=quantity * 1.20;
    }
     if(fruit=="apple" && (day=="Sunday" || day=="Saturday")){
        output=quantity * 1.25;
    }
    if(fruit=="grapefruit" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday")){
        output=quantity * 1.45;
    }
     if(fruit=="grapefruit" && (day=="Sunday" || day=="Saturday")){
        output=quantity * 1.60;
    }
    if(fruit=="kiwi" && (day=="Sunday" || day=="Saturday")){
        output=quantity * 3.00;
    }
    if(fruit=="kiwi" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday")){
        output=quantity * 2.70;
    }
     if(fruit=="pineapple" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday")){
        output=quantity * 5.50;
    }
     if(fruit=="pineapple" && (day=="Sunday" || day=="Saturday")){
        output=quantity * 5.60;
    }
     if(fruit=="grapes" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday")){
        output=quantity * 3.85;
    }
     if(fruit=="grapes" && (day=="Sunday" || day=="Saturday")){
        output=quantity * 4.20;
    }
   
     
    return output;
   
}
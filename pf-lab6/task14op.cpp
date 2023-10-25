#include<iostream>
#include<string>
using namespace std;
string calculateCost(float budget, string category, int people);
main()
{
    float budget;
    cout<<"Enter the budget: ";
    cin>> budget;
    string category;
    cout<<"Enter the category (VIP/Normal): ";
    cin>> category;
    int people;
    cout<<"Enter the number of people in the group: ";
    cin>> people;
    string result;
    result=calculateCost(budget, category , people);
    cout<<result;
}
string calculateCost(float budget, string category, int people)
{
    string answer;
    float calculation;
    float cal1;
    if(people<=4 && category=="Normal")
    {
        calculation= (budget * 0.25);
         cal1=calculation - (people * 249.99);
        if(cal1>249.99){
        answer= "Yes! You have " + to_string(cal1) + " leva left.";
        }
        if(cal1<249.99){
            answer= "Not enough money! You need " + to_string(cal1) + " leva.";
        }
    }
    if(people<=4 && category=="VIP")
    {
        calculation= (budget * 0.25) - 499.99;
         cal1=calculation - (people * 499.9);
        if(cal1>499.9){
            answer= "Yes! You have " + to_string(cal1) + " leva left.";
        }
        if(cal1<499.9){
            answer= "Not enough money! You need " + to_string(cal1) + " leva.";
        }
    }
    if((people<=9 && people>=5) && category=="Normal")
    {
        calculation= (budget * 0.4) - 249.99;
         cal1=calculation - (people * 249.99);
        if(cal1>249.99){
            answer="Yes! You have " + to_string(cal1) + "leva left.";
        }
        if(cal1<249.99){
            answer="Not enough money! You need " + to_string(cal1) +" leva.";
        }
    }
     if((people<=9 && people>=5) && category=="VIP")
    {
        calculation= (budget * 0.4) - 499.99;
         cal1=calculation - (people * 499.99);
        if(cal1>249.99){
            answer="Yes! You have " + to_string(cal1) + " leva left.";
        }
        if(cal1<249.99){
            answer="Not enough money! You need " + to_string(cal1) +" leva.";
        }
    }

    if((people>=10 && people<=24) && category=="Normal"){
        calculation=(budget * 0.5 ) - 249.99;
         cal1=calculation - (people*249.99);
        if(cal1>249.99){
            answer=answer="Yes! You have " + to_string(cal1) + " leva left.";
        
        }
        if(cal1<249.99){
             answer="Not enough money! You need " + to_string(cal1) +" leva.";
        }
    }
    if((people>=10 && people<=24) && category=="VIP"){
        calculation=(budget * 0.5 ) - 499.99;
         cal1=calculation - (people*499.99);
    
    if(cal1>499.99){
            answer="Yes! You have " + to_string(cal1) + " leva left.";
        
        }
        if(cal1<499.99){
             answer="Not enough money! You need " + to_string(cal1) +" leva.";
        }
    }
        if((people>=25 && people<=49) && category=="Normal")
    {
        calculation= (budget * 0.6) - 249.99 ;
         cal1=calculation - (people * 249.99);
        if(cal1>249.99){
            answer="Yes! You have " + to_string(cal1) + "  leva left.";
        }
        else{
            answer="Not enough money! You need " + to_string(cal1) + "leva.";
        }
    }if((people>=25 && people<=49) && category=="VIP")
    {
        calculation= (budget * 0.6) - 499.99 ;
         cal1= calculation - (people * 499.99);
        if(cal1>499.99){
            answer="Yes! You have " + to_string(cal1) + " leva left.";
        }
        else{
            answer="Not enough money! You need " + to_string(cal1) + " leva.";
        }
    }
    if(people>50 && category=="Normal"){
        calculation= (budget * 0.75) - 249.99;
         cal1=calculation -(people * 249.99);
        if(cal1>249.99){
            answer="Yes! You have " + to_string(cal1) + " leva left.";
        }
        else{
            answer="Not enough money! You need " + to_string(cal1) + " leva.";
        }
    }
    if(people>50 && category=="VIP"){
        calculation= (budget * 0.75) - 499.99;
        cal1=calculation - (people * 499.9);
        if(cal1>499.99){
            answer="Yes! You have " + to_string(cal1) + " leva left.";
        }
        else{
            answer="Not enough money! You need " + to_string(cal1) + " leva.";
        }
    }
    return answer;
}    
    

    
    
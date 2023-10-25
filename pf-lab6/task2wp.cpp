#include<iostream>
using namespace std;
string canBuyDress(float dress, string brand);
main(){
    float dresscost;
    cout<<"Enter the dress cost: $";
    cin>> dresscost;
    string brand;
    cout<<"Enter the dress brand: ";
    cin>> brand;
    string result;
    //CALL THE FUNCTION TO CHECK IF THE USER CAN BUY THE DRESS.
    result=canBuyDress(dresscost, brand);
    cout<<result;
}
//FUNTION TO DETERMINE IF THE USER CAN BUY THE DRESS.
string canBuyDress(float dress, string brand){
    string answer;
    if(dress<=1500 && brand=="MTJ"){
        answer="Congratulations! You can buy the dress.";
    }
    else{
        answer="Sorry, the dress doesn't meet the criteria for purchase.";
    }
       return answer;
}

#include<iostream>
using namespace std;
string checkTitle(int age, char gender);
main()
{
    int age;
    cout<<"Enter your age: ";
    cin>> age;
    char gender;
    cout<<"Enter your gender (m/f): ";
    cin>> gender;
    string result;
    result=checkTitle(age, gender);
    cout<<"Your personal title is: "<<result;
}
string checkTitle(int age, char gender)
{
    if(age>=16 && gender=='m')
    {
        return "Mr." ;
    }
    if(age<=16 && gender=='m')
    {
        return "Master";
    }
    if(age>=16 && gender=='f')
    {
        return "Ms.";
    }
    if(age<=16 && gender=='f')
    {
        return "Miss";
    }


}
#include<iostream>
using namespace std;
string findZodiacSign(int day, string month);
main(){
    int date;
    cout<<"Enter the day of birth: ";
    cin>> date;
    string month;
    cout<<"Enter the month of birth (e.g, January, Feburary): ";
    cin>> month;
    string final;
    final=findZodiacSign(date, month);
    cout<<"Zodiac Sign: "<<final;
}
string findZodiacSign(int day, string month){
    string sign;
    if((month=="March" || month=="April") && (date>=19 && date<=21) )
{
    sign="Aries";
}
if(month=="May" && (date>=1 && date<=20)) || (month="April" && (date>=20 && date<=30) )
{
    sign="Taurus";
}


}

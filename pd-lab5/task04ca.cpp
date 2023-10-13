#include<iostream>
#include<string>
using namespace std;
string projecttimecalculation(int hrs,int day,int labours);
main()
{
    int hours;
    cout<<"Enter the needed hours: ";
    cin>> hours;
    int days;
    cout<<"Enter the days that the firm has: ";
    cin>> days;
    int workers;
    cout<<"Enter the number of all workers: ";
    cin>> workers;
    string result;
    result=projecttimecalculation(hours,days,workers);
    cout<<result;
}
string projecttimecalculation(int hrs,int day,int labours)
{
    string answer;
    float dayscal=day*0.9;
    float hrscal=labours*10*dayscal;
    if(hrscal>hrs)
    {
        int extrahours=hrscal-hrs;
        answer="Yes!"+to_string(extrahours)+" hours left.";
    }
    if(hrscal<hrs)
    {
        int morehours=hrs-hrscal;
        answer="Not enough time!"+to_string(morehours)+" hours needed.";
    }
    return answer;
}
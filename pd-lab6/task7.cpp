#include<iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int
studentHour, int studentMinute);
main()
{
    int examHrs;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>> examHrs;
    int examMins;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>> examMins;
    int stuHrs;
    cout<<"Enter Student hour of arrival: ";
    cin>> stuHrs;
    int stuMins;
    cout<<"Enter Student minutes of arrival: ";
    cin>> stuMins;
    string result;
    result=checkStudentStatus(examHrs, examMins, stuHrs, stuMins);
    cout<<result;
    

}
string checkStudentStatus(int examHour, int examMinute, int
studentHour, int studentMinute)
{
    string decide;
    float diff;
    float newmins;
    if(examHour==studentHour && examMinute==studentMinute){
        decide="On time";
    }
    if(examHour>studentHour && examMinute>studentMinute)
    {
        diff=examHour - studentHour ;
        newmins= examMinute- studentMinute;
        cout<<"Early"<<endl;
        
       cout<<diff<<":"<<newmins<<" hours before the start"<<endl;
    }
    if(examHour<studentHour && examMinute<studentMinute)
    {
        diff=studentHour - examHour ;
        newmins=  (studentMinute - examMinute);
        cout<<"Late"<<endl;
        cout<<diff<<":"<<newmins<<" hours after the start";
    }
    
    
    
    if(examHour>studentHour && examMinute<studentMinute)
    {
        diff=(examHour * 60) - (studentHour * 60);
        newmins= diff - (studentMinute - examMinute);
        if(newmins<=30){
            cout<<"On time"<<endl;
            cout<<newmins<< " minutes before the start";
        }
        if(newmins>30){
        cout<<"Early"<<endl;
        cout<<newmins<< " minutes before the start";}
    
    }
     if(examHour<studentHour && examMinute>studentMinute)
    {
        diff= (studentHour * 60 ) - (examHour * 60) ;
        newmins=diff -  ( examMinute - studentMinute );
        cout<<"Late"<<endl;
        cout<<newmins<<" minutes after the start";
      
    }
    return decide;
}
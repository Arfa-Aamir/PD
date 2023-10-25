#include<iostream>
using namespace std;
string decideActivity(string temp, string humidity);
main(){
    string temp;
    cout<<"Enter temperature (warm or cold): ";
    cin>> temp;
    string humidity;
    cout<<"Enter humidity (dry or humid): ";
    cin>> humidity;
    string final;
    final= decideActivity(temp, humidity);
    cout<<"Recommended activity: "<<final;
}
string decideActivity(string temp, string humidity){
    string answer;
    if(temp=="warm" && humidity=="dry"){
        answer="Play tennis";
    }
    if(temp=="warm" && humidity=="humid"){
        answer="Swim";
    }
if(temp=="cold" && humidity=="dry"){
        answer="Play basketball";
    }
    if(temp=="cold" && humidity=="humid"){
        answer="Watch TV ";
    }
    return answer;
}
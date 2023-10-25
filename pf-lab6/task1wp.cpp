#include<iostream>
#include<string>
using namespace std;
string passOrFail(int marks);
main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>> marks;
    string result;
    result=passOrFail(marks);
    cout<<result;
}
string passOrFail(int marks){
    string answer;
    if(marks>50){
        answer= "you are passed with " + to_string(marks) + " marks.";
    }
 if(marks<=50){
    answer= "You are failed with " + to_string(marks) + " marks.";
 }
    return answer;
}


#include <iostream>
using namespace std;
float service(char code, float minutes, char duration);
main()
{
    char code;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> code;
   if(code=='p' || code=='P' || code=='r' || code=='R'){
    char duration;

    if (code == 'p' || code == 'P')
    {
        cout << "Enter the time of the call (D/d for day, N/n for night): ";
        cin >> duration;
    }
    
    float mins;
    cout << "Enter the number of minutes used: ";
    cin >> mins;
    float result;
    result = service(code, mins, duration);}
    else{
        cout<<"Invalid code.";
    }
    
}
float service(char code, float minutes, char duration)
{
    float output;
    if (code == 'r' || code == 'R')
    {
        if (minutes <= 50)
        {
            output = 10.00;
            cout << "Service Type: Regular" << endl;
            cout << "Total Minutes Used: " << minutes << " minutes" << endl;
            cout << "Amount Due: $" << output << endl;
        }
        if (minutes > 50)
        {
            output = minutes - 50;
            output = 10.00 + (output * 0.20);
            cout << "Service Type: Regular" << endl;
            cout << "Total Minutes Used: " << minutes << " minutes" << endl;
            cout << "Amount Due: $" << output << endl;
        }
        
    }
    if (code == 'p' || code == 'P')
    {
        if ((duration == 'D' || duration == 'd') && (minutes <= 75))
        {
            output = 25.00;
            cout << "Service Type: Premium" << endl;
            cout << "Total Minutes Used: " << minutes << " minutes" << endl;
            cout << "Amount Due: $" << output << endl;
        }
        if ((duration == 'D' || duration == 'd') && (minutes > 75))
        {
            output = minutes - 75;
            output = 25.00 + (output * 0.10);
            cout << "Service Type: Premium" << endl;
            cout << "Total Minutes Used: " << minutes << " minutes" << endl;
            cout << "Amount Due: $" << output << endl;
        }
        if ((duration == 'N' || duration == 'n') && (minutes <= 100))
        {
            output = 25.00;
            cout << "Service Type: Premium" << endl;
            cout << "Total Minutes Used: " << minutes << " minutes" << endl;
            cout << "Amount Due: $" << output << endl;
        }
        if ((duration == 'N' || duration == 'n') && (minutes > 100))
        {
            output = minutes - 100;
            output = 25.00 + (output * 0.05);
            cout << "Service Type: Premium" << endl;
            cout << "Total Minutes Used: " << minutes << " minutes" << endl;
            cout << "Amount Due: $" << output << endl;
        }
        
    }
    return output;
    
}

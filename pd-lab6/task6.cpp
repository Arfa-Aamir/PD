#include <iostream>
#include <string>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
main()
{
    string month;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    int stay;
    cout << "Enter the number of stays: ";
    cin >> stay;
    string result;
    result = calculateHotelPrices(month, stay);
    cout << result;
}
string calculateHotelPrices(string month, int numberOfStays)
{

    float output1;
    float output2;
    float discount1;
    float discount2;
    string final;
    if (numberOfStays > 14 && (month == "May" || month == "October"))
    {
        output1 = (65 * numberOfStays);
         output2 = (50 * numberOfStays);
        discount1 = output1 - (output1 * 0.1);  
        discount2 = output2 - (output2 * 0.3);
        final = "Apartment: " + to_string(discount1) + "$. \n";
        final = final +  "Studio: " + to_string(discount2) + "$."; 
    }

    if (numberOfStays <= 14 && (month == "June" || month == "September"))
    {
        output1 = (68.70 * numberOfStays);
        output2 = (75.20 * numberOfStays);
        final = "Apartment: " + to_string(output1) + "$.\n";
        final =  final +"Studio: " + to_string(output2) + "$.";
        if(numberOfStays>14){
        discount1 = output1 - (output1 * 0.1);
        discount2 = output2 - (output2 * 0.2);
        final = "Apartment: " + to_string(discount1) + "$.\n";
        final =  final +"Studio: " + to_string(discount2) + "$.";}
    }

    if (numberOfStays > 14 && (month == "July" || month == "August"))
    {
        if(numberOfStays<=14){
            output1 = 77 * numberOfStays;
            discount2 = 76 * numberOfStays;
            final = "Apartment: " + to_string(output1) + "$.\n";
            final =final +  "Studio: " + to_string(discount2) + "$.";
        }
        output1 = 77 * numberOfStays;
        discount1 = output1 - (output1 * 0.1);
        discount2 = 76 * numberOfStays;
         final = "Apartment: " + to_string(discount1) + "$.\n";
        final =final +  "Studio: " + to_string(discount2) + "$.";
    }
    else if (numberOfStays > 7 && (month == "May" || month == "October"))
    {
        output1 = (65 * numberOfStays);
        output2 = 50 * numberOfStays;
        discount2 = output2 - (output2 * 0.5);
        final="Apartment :" + to_string(output1) + "$.\n";
        final =  final + "Studio: " + to_string(discount2) + "$.";
    }

    return final;
}   
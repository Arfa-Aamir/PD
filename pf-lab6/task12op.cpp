#include<iostream>
using namespace std;
float totalIncome(string type, int rows, int column);
main()
{
    string seat;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>> seat;
    int rows;
    cout<<"Enter the number of rows: ";
    cin>> rows;
    int columns;
    cout<<"Enter the number of columns: ";
    cin>> columns;
    float result;
    result=totalIncome(seat, rows, columns);
    cout<<result;
}
float totalIncome(string type, int rows, int column)
{
    double calculation;
    if(type=="Premiere")
    {
        calculation=12.00 * rows * column;
    }
    if(type=="Normal")
    {
        calculation=7.50 * rows * column;
    }
    if(type=="Discount")
    {
        calculation=5.00 * rows * column;
    }
    return calculation;
}

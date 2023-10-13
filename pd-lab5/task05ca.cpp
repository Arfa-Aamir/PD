#include<iostream>
#include<conio.h>
using namespace std;
void header();
int menu();
float calculatecostperproduct(float price, float quantity, float tax);
void printproductdata(string name,string namenew, float price, int quantity, float tax, float total);
main()
{
    string name1="",name1a="", name2="", name2a="", name3="", name3a="";
    float price1=0.0,price2=0.0,price3=0.0;
    int quantity1=0,quantity2=0,quantity3=0;
    float tax1=0.0,tax2=0.0,tax3=0.0;
    float total1=0.0,total2=0.0,total3=0.0;
    int option;
    while(true)
    {
    
    header();
    option=menu();
    if(option==1)
    {
        cout<<"Enter the name of the 1st book: ";
        cin>> name1;
        cout<<"Author of book 1: ";
        cin>> name1a;
        cout<<"Enter the price of 1st book: ";
        cin>> price1;
        cout<<"Enter the quantity of the 1st book: ";
        cin>> quantity1;
        cout<<"Enter tax on the 1st book: ";
        cin>> tax1;
        cout<<"Enter the total of 1st book: ";
        cin>> total1;

    }
    if(option==2)
    {
        cout<<"Enter the name of the 2nd book: ";
        cin>> name2;
        cout<<"Author of book 2: ";
        cin>> name2a;
        cout<<"Enter the price of 2nd book: ";
        cin>> price2;
        cout<<"Enter the quantity of the 2nd book: ";
        cin>> quantity2;
        cout<<"Enter tax on the 2nd book: ";
        cin>> tax2;
        cout<<"Enter the total of 2nd book: ";
        cin>> total2;
    }
    if(option==3)
    {
        cout<<"Enter the name of the 3rd book: ";
        cin>> name3;
        cout<<"Auhtor of book 3: ";
        cin>> name3a;
        cout<<"Enter the price of 3rd book: ";
        cin>> price3;
        cout<<"Enter the quantity of the 3rd book: ";
        cin>> quantity3;
        cout<<"Enter tax on the 3rd book: ";
        cin>> tax3;
        cout<<"Enter the total of 3rd book: ";
        cin>> total3;
    }
    if(option==4)
    {
        total1=calculatecostperproduct(price1, quantity1, tax1);
        total2=calculatecostperproduct(price2, quantity2, tax2);
        total3=calculatecostperproduct(price3, quantity3, tax3);
        float totalpayable= total1 + total2 + total3;
        cout<<"Total payable amount (inlcuding tax): "<<totalpayable <<endl;

    }
    if(option==5)
    {
        cout<<"All books data" <<endl;
        cout<<"Name" << "\t" <<"Writter"<<"\t"<< "price"<< "\t"<< "quantity" <<"\t" << "tax" << "\t" << "totalperproduct"<< endl;
        printproductdata(name1, name1a, price1, quantity1, tax1, total1);
        printproductdata(name2, name2a, price2, quantity2, tax2, total2);
        printproductdata(name3, name3a, price3, quantity3, tax3, total3);
     }
     if(option==6)
     {
        return 0;
     }
     }
     cout<<"Press any key to continue..";
     getch();
     system("cls");  
}
void header()
{
    cout<<"*************************************************************************"<<endl;
    cout<<"*                BOOK MANAGEMENT SYSTEM                                 *"<<endl;
    cout<<"*************************************************************************"<<endl;
    cout<< endl <<endl;
}
int menu()
{
    int option;
    cout<<"Select one of the following options.."<<endl;
    cout<<"1.Add 1st book data"<<endl;
    cout<<"2.Add 2nd book data"<<endl;
    cout<<"3.Add 3rd book data"<<endl;
    cout<<"4.Calculate Total"<<endl;
    cout<<"5.View all books data"<<endl;
    cout<<"6.Exit"<<endl;
    cout<<"Enter your option.."<<endl;
    cin>> option;
    return option;
}
float calculatecostperproduct(float price,float quantity,float tax)
{
    float total;
    total=price*quantity;
    total=total + total * ((tax/100));
    return total;
}
void printproductdata(string name, string namenew, float price, int quantity, float tax, float total)
{
    cout<< name <<"\t"<< namenew <<"\t"<< quantity << "\t"<< tax << total <<endl;
}
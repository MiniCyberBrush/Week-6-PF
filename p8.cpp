#include<iostream>
using namespace std;
float discount(string day, string month, float price);

main(){

    float price, payable;
    string day , month;
    cout << "Enter Purchase Day: ";
    cin >> day;
    cout << "Enter Purchase Month: ";
    cin >> month;
    cout << "Enter Purchase Amount: ";
    cin >> price;
    payable = discount(day,month, price);
    cout << "Payable Amount after discount: "<<payable;
}

float discount(string day, string month, float price)
{
    float payableAmount = price; 
    if (day == "Sunday" && ( (month == "October") || (month == "March") || (month == "August") ) )
    
    {
       
        {payableAmount = price - (price*0.1);
        return payableAmount;}
    }
else if (day == "Monday" && ((month == "November") || (month == "December") ) )
   {payableAmount = price - (price*0.05);
    return payableAmount;}

    return payableAmount;



}
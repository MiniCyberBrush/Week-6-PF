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
    if (day == "Sunday" )
    
    {
        if(month == "October")
        {payableAmount = price - (price*0.1);
        return payableAmount;}
        else 
{
    payableAmount =  price - (price*0.05);
    return payableAmount;
}
    }
    return payableAmount;

}
#include<iostream>
#include<math.h>
using namespace std;
double calculateCost(float budget, string category, int people);
main(){

int people, budget;
string category;
double amount;
cout << "Enter the budget: ";
cin >> budget;
cout << "Enter the category (VIP/Normal): ";
cin >> category;
cout << "Enter the number of people in the group: ";
cin >> people;
amount = calculateCost(budget, category, people);
if (amount >= 0)
{
    cout << "Yes! You have " << amount << " leva left.";
}


else if (amount< 0)
{
    cout << "Not enough money! You need " << abs(amount) << " leva.";
}


}

double calculateCost(float budget, string category, int people)
{
    float amount;
    float vipPrice = (499.99*people);
    float normalPrice = (249.99*people);
    float transportationPrice;
    float total;
    
    if ( people <=4 )
    {
       transportationPrice = budget * 0.75; 
    }
     
    if ( people >=5 && people <=9 )
    {
       transportationPrice = budget * 0.60; 
    }

 
    if ( people >=10 && people <=24 )
    {
       transportationPrice = budget * 0.50; 
    }

 
    if ( people >=25 && people <=49 )
    {
       transportationPrice = budget * 0.40; 
    }

 
    if ( people >=50 )
    {
       transportationPrice = budget * 0.25; 
    }


   
    if (category == "VIP")
    {
        total = vipPrice + transportationPrice;
    }


     if (category == "Normal")
    {
        total = normalPrice + transportationPrice;
    }



         amount = budget - total;



   return amount;

}
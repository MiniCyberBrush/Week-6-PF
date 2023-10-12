#include<iostream>
using namespace std;
bool areSame(float num1, float num2, float num3);
main(){

int num1,num2, num3;
bool result;
cout << "Enter the fisrt number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;
cout << "Enter the third number: ";
cin >> num3;
result = areSame(num1, num2, num3);
cout << result;
}


 bool areSame(float num1, float num2, float num3)
 {
    bool yes = true, no = false;
    if (num1 == num2 && num1 == num3 && num2 == num3)
    {
        return yes;
    }
    return no;
 }
#include<iostream>
using namespace std;
main(){

int num ,num1 ,num2 , num3,sum;
cout << "Enter a 3-digit number: ";
cin >> num;
num1 = num%10;
num2 = (num/10)%10;
num3 = (num/100)%10;
sum = num1 + num2 + num3;
if (sum%2==1 && num%2==1)
cout << true;
else if (sum%2 == 0 && num%2 == 0 )
cout << true;
else 
cout << false;
}
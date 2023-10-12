#include<iostream>
using namespace std;
float Perimeter(char letter , float number);
main (){
    char letter; float number, perimeter;
cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
cin >> letter;
cout << "Enter the value: ";
cin >> number;
perimeter = Perimeter( letter , number);
cout << "The perimeter is: "<< perimeter;


}


float Perimeter(char letter , float number)
{
    float perimeter;
    if (letter == 's')
    {
        perimeter = number * 4;
    }

if (letter == 'c')
    {
        perimeter = number * 6.28;
    }



if (letter == 't')
    {
        perimeter = number * 3;
    
    }


if (letter == 'h')
    {
        perimeter = number * 6;
    }

    return perimeter;
}
#include<iostream>
using namespace std;
float totalIncome(string screening, int rows, int columns);
main(){

    int rows, columns;
    string screening;
    float income;
    cout << "Enter the screening type (Premiere/Normal/Dicount): ";
    cin >> screening;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    income = totalIncome(screening, rows, columns);
    cout << income;


}

float totalIncome(string screening, int rows, int columns)
{float income;
    if (screening == "premiere")
    {
        income = 12.00*rows*columns;
    }
    if (screening == "normal")
    {
        income = 7.50*rows*columns;
    }
    if (screening == "discount")
    {
        income = 5.00*rows*columns;
    }
    return income;
}
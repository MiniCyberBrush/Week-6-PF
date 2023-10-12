#include<iostream>
using namespace std;
string personalTitle(int age, char gender);
main(){

    int age;
    string title;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
     cout << "Enter your gender (m/f): ";
    cin >> gender;
    title = personalTitle(age, gender);
    cout << "Your personal title is: "<<title;

}

string personalTitle(int age, char gender)
{    string title;
    if (age >= 16 && gender == 'm')
    {
        title = "Mr.";
    }
    else if (age < 16 && gender == 'm')
    {
        title = "Master";
    }

    else if (age < 16 && gender == 'f')
    {
        title = "Miss";
    }

    else if (age >= 16 && gender == 'f')
    {
        title = "Ms.";
    }
    return title;
}
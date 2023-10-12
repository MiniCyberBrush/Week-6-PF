#include<iostream>
using namespace std;
string checkSpeed(float speed);
main(){

float speed;
string howFast;
cout << "Enter the speed: ";
cin >> speed;
howFast = checkSpeed(speed);
cout << howFast;

}

string checkSpeed(float speed)
{   string speedCheck;
    if (speed <=10)
    {
        speedCheck = "slow";
        
    }
     else if (speed > 10 && speed <= 50)
    {
        speedCheck = "average";
    }
     else if (speed > 50 && speed <= 150)
    {
        speedCheck = "fast";
    }
    else  if (speed > 150 && speed <= 1000)
    {
        speedCheck = "ultra-fast";
    }
     else if (speed > 1000 )
    {
        speedCheck = "extremely fast";
    }
    
return speedCheck;
}
#include <iostream>

using namespace std;

int main()
{
/* The common field cricket chirps in direct proportion to the current temperature. Adding 40 to
the number of times a cricket chirps in a minute, then dividing that value by 4 gives us the
temperature. Write a program that takes as input the number of chirps in a minute and prints
the current temperature.*/

//c proportional to t

float c;
cout<< "Input the value of times the cricket chirps: ";
cin>> c;
float t;
t = (c + 40)/4;
cout<< "The temperature is: ";
cout<< t;
return 0;
}

#include <iostream>

using namespace std;

int main()
{
    /*As electronic stopwatches become cheaper and more accurate, we will no doubt be
deluged with impossibly accurate measurements of time. Write a program that takes as
input a time period given in seconds, and outputs the number of hours, minutes and
seconds it represents*/


    int x,h,m,s,y;
    cout << "Enter the value: ";
    cin>>x;
    if(x >= 3600){
        h = x/3600;
        y = x -(h*3600);
        m = y/60;
        s= y-(m*60);}
        else
            if (60<=x <3600){
           // y = x-(h*3600);
            m=x/60;
            s=x-(m*60);}
            else
                if (60<x>=0
                    ){
                    s=x;


                    }


    cout<< "Number of hours: ";
    cout << h;
    cout<<"\n";
    cout<< "Number of minutes: ";
    cout << m;
    cout<<"\n";
    cout<< "Number of seconds: ";
    cout << s;
    cout<<"\n";
    cout<<"\n";


}

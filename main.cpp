#include <iostream>

using namespace std;

int main()
{
    float a1,a2,a3,a4,m,s,f,mc,sc,fc,ac,final_grade;
    cout<<"Enter the value for your first assignment";
    cin>>a1;
    cout<<"Enter the value for your second assignment";
    cin>>a2;
    cout<<"Enter the value for your third assignment";
    cin>>a3;
    cout<<"Enter the value for your forth assignment";
    cin>>a4;
    cout<<"Enter the value for your midterm examination";
    cin>>m;
    cout<<"Enter the value for your final examination";
    cin>>f;
    cout<<"Enter the value for your section examination";
    cin>>s;

    mc=m*0.15;
    fc=f*0.35;
    sc=s*0.1;
    ac=((a1+a2+a3+a4)/4*0.4);
    final_grade=ac+mc+fc+sc;
    cout<<final_grade;
    return 0;
}

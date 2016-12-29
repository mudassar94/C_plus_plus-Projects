#include <iostream>
#include <cmath>
#define pi 3.14159265359

// EEL 2161, Spring 2014, Homework 3, Muhammad Mudassar

using namespace std;

int main()
{
    double theta=pi;

    cout<<"sin(" <<theta<<")="<<sin(theta);

    cout<<atan(1.5)<<endl;

    cout<<atan(10.0/15.0)<<endl;


    int a;
    int tot=0;
    while(a!=0)
    {
        cout<<"Enter a grade.";
        cin>>a;
        cout<<"Enter -999 to Exit."<<endl;
        if (a==-999)
            break;
        tot=tot+a;
    cout<<"Total is "<<tot<<endl;

    }




    return 0;
}

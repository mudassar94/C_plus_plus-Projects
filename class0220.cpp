/********************************************
    C for Engineers
    Feb 20, 2014
    Instructor : Mr. Nishantha Randunu

/********************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
/** save f(t)=(3t-5)(t+2) for range -2<=t<=2 with step 0.1 into an array  **/
    double t,ft;
    double arrayF[41]={ };
    int idx=0;
    int w=8;                    //use w to set the output field width

    cout.precision(2);          //set the number of decimal places
    cout<<fixed;

    for(t=-2;t<2.01;t=t+0.1)    //loop for t values
    {
       ft=(3*t-5)*(t+2);        //find ft
       arrayF[idx]=ft;          //save ft into array
       cout<<setw(w)<<t<<"\t"<<setw(w)<<arrayF[idx]<<"\n";  //output
       idx++;                   //increment the array index
    }

/** find max, min, avg values of an array                   **/

    double temp[5]={18.5, 21.3, 22.7, 20.3, 17.0};
    double time[5]={6.0, 8.0,12.0,5.3,23.0};
    double total=0;
    double maxt=temp[0];        //initialy set max to the first element of the array
    int maxidx;                 //variable to save the index of the max element

    for(idx=0;idx<5;idx++)
    {
        total=total+temp[idx];

        if(temp[idx]>maxt)      //compare saved max value with array element
        {
            maxt=temp[idx];     //update max values with nex maximum
            maxidx=idx;         //save corresponding index number
        }

    }
    double time_tempmax=time[maxidx];   //get the corresponding time from time array

    cout<<"Average temperature is : "<<total/5.0;
    cout<<"\nMaximum temperature is : "<<maxt;
    cout<<" at "<<time_tempmax;

    return 0;
}

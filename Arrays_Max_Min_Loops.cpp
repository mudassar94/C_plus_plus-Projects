#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Question 1
    int number_array[10]={5, -2, -31, 8, 0, 23, -7, 10, 11, -5};
    int index=0, count=0;

    for (index=0; index<=9; index++)  // index is defined
    {
        if (number_array[index]>0)      // checking whether numbers are positive
        {
            count++;                    // counting the positive numbers
        }
    }
    cout<<"Number of positive values: "<<count<<"\n";

    int pos[count], n=0;

    for (index=0; index<=9; index++)
    {
        if (number_array[index]>0);
        {
            pos[n]=number_array[index];     // if the array element is positive, it will save number_array into pos. numbers.
            n++;
            cout<<"The positive array {"<<number_array[index]<<"}"<<endl;  // output of the positive array.
        }
    }

    // Question 2


    double t, ft,ft_array[41]={};
    int idx=0, w=4;

    cout.precision(2);
    cout<<fixed;
    cout<<"   t\t ft\n---------------\n";

    for(t=-2; t<=2; t=t+0.1)
    {
        ft=(3*t-5)*(t+2);
        ft_array[41]=ft;
        idx++;
        cout<<setw(w)<<t<<"\t"<<ft<<"\n";  // identifying the width of the columns and outputting the t and ft values.
    }

    int min=ft_array[0];
    int indx=0;
    for (indx=0; indx<=41; indx++)
    {
        if(ft_array[indx]<min)              //if the array is greater than minimum, then will output the minimum value.
        {
            min=ft_array[indx];             // declaring minimum value to the array.
        }

    }
    cout<<"Minimum value is "<<min;

// Question 3

    cout<<"\n";
double temp[10]={61.8, 61.6, 63.3, 67.0, 71.7, 72.7, 72.3, 70.1, 65.9, 62.0};
double time[10]={1.00, 4.00, 6.30, 8.00, 10.00, 12.30, 15.00, 18.30, 20.00, 23.00};
double total_temp=0, avg_temp;

for(index=0;index<=9;index++)
{
    total_temp=total_temp+temp[index];
}
avg_temp=total_temp/10.0;
cout<<"Avg temp is "<<avg_temp;


double total=0;
double maxt=temp[0];
    int maxidx;

    for(idx=0;idx<9;idx++)
    {
        total=total+temp[idx];

        if(temp[idx]>maxt)
        {
            maxt=temp[idx];
            maxidx=idx;
        }

    }
    double time_tempmax=time[maxidx];

    cout<<"\nMaximum temperature is : "<<maxt;
    cout<<" at "<<time_tempmax;
double mint=temp[0];
    int minidx;
    for (idx=0; idx<9; idx++)           // defining the index for total temp.
    {
        total=total+temp[idx];

        if (temp[idx]<mint)             // checking whether the temperature is minimum.
        {
            mint=temp[idx];
            minidx=idx;                 // identifying minimum index equal to the index.
        }
    }
    double time_tempmin=time[minidx];
    cout<<"\nMinimum temperature is : "<<mint; //outputting the maximum temp at a certain time.
    cout<<" at "<<time_tempmin;

    return 0;
}

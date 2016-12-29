#include <iostream>

using namespace std;

int main()
{

/** Find the number of positive elements in an array                 **/

    int a[5]={-3,4,0,7,-1};
    int idx,pos_c=0;            //index and count variables

    for(idx=0;idx<=4;idx++)     //for loop to access array a[5] element by element
    {
        if(a[idx]>0)            //check whether array element is positive
        {
            pos_c++;            //if it's positive increment the count
        }
    }
    cout << "Number of positive values :" <<pos_c<< endl;

/** Save positive elemnets from array a[] into array pos_a[]            **/

    int pos_a[pos_c],idx_p=0;   //define pos_a array with size pos_c and index for pos_a
    cout<<"\npos_a={";
    for(idx=0;idx<=4;idx++)     //for loop will access array a[5] element by element
    {
        if(a[idx]>0)            //check whether array element is positive
        {   //if it's positive save array a element into array pos_a
            pos_a[idx_p]=a[idx];
            //increment the pos_p index by one
            idx_p++;
            //output array a element
            cout<<a[idx]<<", ";
        }
    }
    cout<<"}\n";

/** Find the maximum value of an array                                 **/

    int b[8]={-5, 0, 66, -67, 39, 2, -15, 7};
    int max=b[0];               //Initialy set max=first value of the array

    for(idx=0;idx<=8;idx++)     //access all elements of the array
    {
        if(b[idx]>max)          //check whether array element is greater than max
        {
            max=b[idx];         //if it's assign that array element to max
        }
    }

    cout<<"\nMaximum value is : "<<max;



    return 0;
}

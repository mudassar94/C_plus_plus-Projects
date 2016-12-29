/********************************************
    C for Engineers
    Feb 13, 2014
    Instructor : Mr. Nishantha Randunu

/********************************************/
#include <iostream>

using namespace std;

int main()
{
    /** Add 2 arrays using a loop   */

    int array1[5]={1,2,3,4,5};          //declare and initialize the first array
    int array2[5]={10,20,30,40,50};     //declare and initialize the second array
    int array3[5];                      //declare the third array
    int a;
    cout<<"array3={";
    for(a=0;a<=4;a=a+1)                 //for-loop will control the array indexes
    {
        array3[a]=array1[a]+array2[a];  //update array3 with array1 and array2 values
        cout<<array3[a]<<", ";
    }
    cout<<"} \n\n";


    /**** Save y values for the range of -4<=x<=3 with step-size=0.5  into an array****/

    double array_y[20]={};
    //initialize the y array with all zeros. size of the array is set to 20
    double x,y;
    int index=0;            //index variable will use with the array position
    cout<<" x\t y\n-----------\n";
    for(x=-4;x<=3;x=x+0.5)  //set the x range and the step-size
    {
        if(x<-3)                    //check for different x regions
        {
            y=4*x+12;               //find the corresponding y value
            array_y[index]=y;       //save into array
        }
        else if(x<1)
        {
            y=0;
            array_y[index]=y;
        }
        else
        {
            y=2*x-2;
            array_y[index]=y;
        }
        cout<<x<<"\t"<<array_y[index]<<"\n";    //output the x and y values
        index=index+1;                          //increment the index by one
    }
    return 0;
}

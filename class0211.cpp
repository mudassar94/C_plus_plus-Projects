/********************************************
    C for Engineers
    Feb 11, 2014
    Instructor : Mr. Nishantha Randunu

/********************************************/

#include <iostream>

using namespace std;

int main()
{
 /** 1-D Array                                        **/
 /** An array is a series of elements of the same type
     that can be individually referenced by an index      **/

    int number[5]={50,35,0,-30,7};  //integer array with 5 initial values

    cout << number[2] << endl;      //output the 3rd element (index=2) of the array

    number[2]=10;                   //assign value 10 to the 3rd element of the array
    cout << number[2] << endl;      //output the 3rd element (index=2) of the array
    cout <<"\n\n";
/** filling an array using a loop                         **/

    int integer_val[10];            //define an integer array with 10 elements not initialized
    int a;

    for(a=0;a<=9;a=a+1)             //for loop runs from 0 to 9
    {
        integer_val[a]=a;           //fill the array using for-loop
        //here arrey element's index is same as the value save to that element
        cout<<integer_val[a]<<"\n"; //output the element values
    }


    return 0;
}

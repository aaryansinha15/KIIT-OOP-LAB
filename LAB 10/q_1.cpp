// LE1.1 (Function Template)
//  Define a function template for finding the minimum value contained in
// an array. Write main() function to find the minimum value of integer array and minimum value
// of floating point numbers i/n an array.

#include <iostream>
using namespace std;

 template<class A>
 A min(A arr[],int size)
 {
     int z;
     A min;
     min=arr[0];
     for(z=0;z<size;z++)
     {
         if(min>arr[z])
         min=arr[z];
     }
 return (min);
 }


int main ()
{
    int iarr[10];
    float farr[10];

// integer value input
cout<<"Enter the integer array\n";
cout<<"--------------------------------\n";
 for(int i=0; i<4; i++)
 {
       cout<<"Enter the int value "<<i+1<<endl;
       cin>>iarr[i];      
 }
 cout<<"Enter the float array \n";
cout<<"-------------------------------\n";
 for(int j=0; j<5; j++)
 {
     cout<<"Enter the float value "<<j+1<<"\n";

          cin>>farr[j];
 }
cout<<"For minimum integer value in array it is "<<min(iarr,4)<<endl;

cout<<"For minimum float value in array it is "<<min(farr,5)<<endl;

    return 0;
}
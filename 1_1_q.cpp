// Write a program to demonstrate the concept of call-by-value,  by taking swapping of two numbers as an 
// example
// call by value
#include <iostream>
using namespace std;
int value(int x,int y,int temp) 
{
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping the number by using call by value idea it is "<< x <<" and "<< y <<endl;
}
int main ()
{
 int x,y,temp;
   cout<<"Enter the value for x"<<endl;
   cin>>x;

   cout<<"Enter the value for y"<<endl;
   cin>>y;   

     cout<<"The value entered are  "<< x <<" and "<<   y <<endl;
   value(x,y,temp);
    return 0;
}
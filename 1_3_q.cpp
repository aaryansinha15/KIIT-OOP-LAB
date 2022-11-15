// Write a program to demonstrate the concept of call-byaddress  by taking swapping of two numbers as an 
// // example

// call by address

#include <iostream>
using namespace std;

int address(int *p,int *q,int * swap) 
{
    *swap=*p;
    *p=*q;
    *q=*swap;
    cout<<"The value after swaping is " << *p << " and " << *q <<endl;
}

int main ()
{
    int x,y,temp;
    cout << "Enter the value for x"<<endl;
    cin >> x;
    cout << "Enter the value for y"<<endl;
    cin >> y;
    int *p,*q,*swap;   
     p=&x;
     q=&y;
     swap=&temp;
    cout << "The value before swaping the number are " << x << " and " << y << endl;
    address(  &x,  &y,  &temp);
return 0;
}
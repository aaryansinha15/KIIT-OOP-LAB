// // Write a program to demonstrate the concept of call-by-reference  by taking swapping of two numbers as an 
// // example.

// // call by reference


#include<iostream>
using namespace std;
void swapping(int &x,int &y);
int main(){
    int a=57,b=29;
    int &x=a;
    int &y=b;
    cout<<"Before Swapping a and b Are : "<<x<< " and " <<y<<endl;
    
    swapping(a,b);
    return 0;
}
void swapping(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
     cout<<"After swapping A And B Are : "<<x<<" and "<<y<<endl;
}
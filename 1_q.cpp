// Write a program to perform addition of two complex numbers using constructor. Complex
// numbers are given through user input.

#include<iostream>
using namespace std;

class complex
{
    int a,b,c,d,i,j;
 
 public:
 complex()
 {
     cout<<"Enter the first complex number"<<endl;
 cin>>a>>b;
 cout<<"Enter the second complex number"<<endl;
 cin>>c>>d;
 cout<<"\nThe given complex number is "<<endl;
 cout<<a<<"+"<<b<<"i\n"<<c<<"+"<<d<<"i\n"<<endl;
 }
 void add()
 {
     i=a+c;
     j=b+d;  
 }     

 void display()
 {
        cout<<"Sum of two complex numbers is \n";
        cout<<i<<" + "<<j<<"i\n";
 }

};
int main()
{
    complex c;
    c.add();
    c.display();
    return 0;
}
// Write a program to find the Greatest Common Divisor (GCD) of two numbers.

#include <iostream>
using namespace std;
int main ()
{
   int a,b,hcf;
   cout<<"Enter the value of a"<<endl;
   cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
for(int i=1;i<=a && i<=b;i++) 
{
    if(a%i==0 && b%i==0)
    {
         hcf=i;
    }
}
    cout<<"The GCD/HCF of "<<a<<" and "<<b<<" is "<< hcf<<endl;
    return 0;
}
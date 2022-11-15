// Write a program in to check whether a number is prime or not.
#include<iostream>
using namespace std;
int main ()
{
   int num,factor=0;
   cout<<"Enter the value for the number "<<endl;
   cin >> num;
      for(int i=2;i<=(num)/2;i++)
   {
       if(num%i==0)
       {
        factor++;
       }
   }
    if(factor==0)
  {
      cout<<"Number is a prime number"<<endl;
  }
  else
  {
      cout<<"Number is not a prime number"<<endl;
  }
    return 0;
}
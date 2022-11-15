//  (Pointers to derived classes) Write a program to illustrate how pointers to a base class is used
// for both base and derived class.


#include<iostream>
using namespace std;
class base
 {
   int a;
   public:
   void get()
    {
    cout<<"Enter a value for A ";
    cin>>a;
    }
 void put()
{
cout<<"The Value for A "<<a;
}
 };
 
class derived : public base
 {
   int a;
   public:
   void get()
   {
    cout<<"\nEnter a value for A";
     cin>>a;
}
 void put()
{
 cout<<"\nThe Value for A "<<a;
}

 };

int main()

 {

 base *bptr,b;

 derived d;

cout<<"\nPointing to the base class \n";

bptr=&b;

bptr->get();

bptr->put();

cout<<"\nPointing to the derived class \n";

bptr=&d;

bptr->get();

bptr->put();
 
 return 0;

 }





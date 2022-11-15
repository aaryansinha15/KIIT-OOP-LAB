//  Write a program to overload unary (++) operator and unary (--) operator.

#include <iostream>
using namespace std;

class unary_double_op
{
   int a,b;
   public:
   void set(int x,int y)
   {
        a=x;
        b=y;
   }

   void operator ++()
   {

      a = a+2;
      b = b+2;
      cout<<"Value after operator overloading\n";
   }
   void operator --()
   {
         a= a-2;
         b= b-2;
   }


   void display()
   {
       cout<<" Value for a = "<<a<<endl;
       cout<<" Value for b = "<<b<<endl; 
   }
};
int main ()
{
   
   unary_double_op u1,u2;
   int n1,n2;
   cout<<"Enter for the first operator\n";
   cout<<"Enter the value for a\n";
   cin >> n1;
   cout<<"Enter the value for b\n";
   cin >> n2;
   u1.set(n1,n2);
    ++u1;
   u1.display();
 cout<<"\n-----------------\n";
 cout<<"Enter for thr second operator\n";
 int m1,m2;
  cout<<"Enter the value for a\n";
   cin >> m1;
   cout<<"Enter the value for b\n";
   cin >> m2;
   u2.set(m1,m2);
   --u2;
   u2.display();
    return 0;
}










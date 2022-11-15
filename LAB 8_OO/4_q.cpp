// Write a program to overload unary (++) operator and unary (--) operator using friend function.
#include <iostream>
using namespace std;

class unary_double_fd_operator
{
    
    int a,b;
    public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
     }

     void friend operator ++(unary_double_fd_operator &c);
     void friend operator --(unary_double_fd_operator &d);
};

void operator ++(unary_double_fd_operator &c)
{
    c.a=c.a+2;
    c.b=c.b+2;

}
void operator --(unary_double_fd_operator &d)
{
    d.a=d.a-2;
    d.b=d.b-2;
}

int main ()
{
  unary_double_fd_operator u1,u2;
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
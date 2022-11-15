// Write a program to overload unary (-) operator using friend function

#include<iostream>
using namespace std;

class invert_position
{
    int x,y;
    public:
        invert_position(int a,int b)
        {
         x=a;
         y=b;
        }
    void show()
        {
            cout<<"\nx= "<< x;
            cout<<"\ny= "<< y;
        }
   void friend  operator -(invert_position &z);
};
void operator -(invert_position &z)
{
    z.x=-z.x;
    z.y=-z.y;
}
int main()
{
    int a,b;
    cout<<"Enter the value for a\n";
    cin>>a;
    cout<<"Enter the value for b\n";
    cin>>b;
    invert_position i(a,b);
    -i;
    i.show();
    return 0;
}
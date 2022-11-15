//  Write a program to overload unary (-) operator. 

#include<iostream>
using namespace std;

class unary_op
{
        int a, b;
     public:
        void accept()
        {
                cout<<"\n Enter Two Numbers : \n";
                cout<<" ";
                cin>>a;
                cout<<" ";
                cin>>b;
        }
        void operator-() //Overload Unary Decrement
        {
                a--;
                b--;
        }
        void display()
        {
                cout<<"\n A : "<<a;
                cout<<"\n B : "<<b;
        }
};
int main()
{
        unary_op id;
        id.accept();
        -id;
        cout<<"\n After Decrementing : ";
        id.display();
        return 0;
}
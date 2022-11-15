//  (this Pointer) Write a program to display the contains of an object, when local variable’s
// name is same as member’s name by using this pointer.
#include <iostream>
using namespace std;

class ptr
{
       int a;
     public:
     void get(int x)
     {
         this->a = x;
     }
     void print()
     {
         cout<<"a = "<<a<<endl;
     }
     
};

int main()
{
    ptr s1;
    int a;
    cout<<"Enter the value for a\n";
    cin>> a;
    s1.get(a);
    s1.print();
    return 0;
}


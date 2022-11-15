// Write a program using copy constructor to copy data of an object to another object.

#include<iostream>
using namespace std;
 
class CC
{
private:
    int d1, d2;
public:
    CC(int d11, int d22) 
    { d1 = d11; 
      d2 = d22; 
    }
 
    CC(const CC &p1) 
    {
    // Copy constructor called
     d1 = p1.d1; 
     d2 = p1.d2; 
    }
 
    int getd1()           
    {
      return d1; 
    }
    int getd2()            
    {  
      return d2;
    }
};
 
int main()
{

    int a,b;
    cout<<"Enter the two random numbers\n";
    cin>>a;
    cout<<"\n";
    cin>>b;
    cout<<"\n";
    CC p1(a, b); // parameterized constructor is called 
    CC p2 = p1; // Copy constructor is called
 
    // ASSIGNE THE VALUES
    cout << "p1.x = " << p1.getd1() << ", p1.y = " << p1.getd2();
    cout << "\np2.x = " << p2.getd1() << ", p2.y = " << p2.getd2();
 
    return 0;
}
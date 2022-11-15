// (Virtual Function) Define a class ABC. Derive two classes BBC and KBC from ABC. All
// the classes contains same member function name as display(). The base class pointer always
// holds the derived class objects.
// a) Write a program such that base class pointer or reference will always access/call the base
// version of the members available in derived class, do not have any access to the derived
// class members.


#include <iostream>
using namespace std;

class ABC
{
   public:
   void display()
   {
     cout<<"Welcome to the base class that is ABC\n";
   }
};
class BBC : public ABC
{
  public:
  void display()
  {
    cout<<"Welcome to the fisrt derived class that is BBC\n";
  }
};
class KBC :public ABC
{
   
   public:
   void display()
   {
      cout<<"Welcome to the second derived class that is KBC class\n";
   }
};


int main ()
{
  ABC *a;
  BBC b;
  KBC k;

  a=&b;
  a->display();

  a=&k;
  a->display();


  return 0;
}
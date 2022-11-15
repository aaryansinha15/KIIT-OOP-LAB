// (Pure Virtual Function) Write a program by modifying LE8.5 b) by making display() as
// pure virtual function
#include <iostream>
using namespace std;
class ABC
{
   public:
//    USE OF PURE VIRTUAL FUNCTION THAT IS DISPLAY IS INITIALIZED TO ) AND NO DEFINITION IS GIVEN.
  virtual void display()=0;
};
class BBC : public ABC
{
  public:
  virtual void display() 
  {
    cout<<"Welcome to the fisrt derived class that is BBC\n";
  }
};
class KBC :public ABC
{
   
   public:
   void display()
   {
      cout<<"Welcome to the second derived class that is KBC\n";
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
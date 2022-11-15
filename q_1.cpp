//  (Single Inheritance) Write a program to create a class CIRCLE with one field as radius, used
// to calculate the area of a Circle. Create another class RECTANGLE used to calculate the area
// of the rectangle which is a subclass of CIRCLE class. Use the concept of single inheritance
// such that the radius of circle class can be re-used as length in rectangle class. Take necessary
// data members and member functions for both the classes to solve this problem. All the data
// members are initialized through the constructors. Show the result by accessing the area
// method of both the classes through the objects of rectangle class.


#include<iostream>
using namespace std;

class Circle{
    protected:
      int r;
    public:
      void getCir(int rad){
          r = rad;
      }
      double areaCir(){
          return (3.14*r*r);
      }  
};

class Reactangle : public Circle{
    int b;
    public:
      void getRect(int len, int bre){
          r = len;
          b = bre;
      }
      int areaRect(){
          return (r*b);
      }

};

int main(){
    int r, l, b;
    cout << "Enter the radius of the circle : ";
    cin >> r;
    cout << "Enter the length and breadth of the rectangle : ";
    cin >> l >> b;
    Reactangle R1;
    R1.getCir(r);
    R1.getRect(l,b);
    double cir_area = R1.areaCir();
    int rect_area = R1.areaRect();
    cout << "The area of the circle is : " << cir_area << endl;
    cout << "The area of the rectangle is : " << rect_area << endl;
}
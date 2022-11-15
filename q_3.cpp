// (Hierarchical Inheritance) Modify the program no. LE6.1 as follows:
// Derive a class named as CYLINDER from CIRCLE class. Take necessary data & member
// functions for this class to calculate the volume of the cylinder. Show the result by accessing
// the area method of circle and rectangle through object of rectangle class and the area of circle
// and volume method of cylinder class through the objects of cylinder class.




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

class Cylinder : public Circle{
    int h;
    public:
      void getCylin(int rad, int ht){
          r = rad;
          h = ht;
      }
      double volCylin(){
          return (3.14*r*r*h);
      }
};

int main(){
    Reactangle R1, R2;
    cout<<"Enter the details of the rectangle\n";
    cout<<"Enter the length and breadth \n";
    int l,b;
    cin >>l>>b;
    R1.getRect(l,b);
    cout<<"Enter radius \n";
    int r;
    cin >>r;
    R2.getCir(r);
    int rect_area = R1.areaRect();
    double cir_area = R2.areaCir();

    Cylinder C1, C2;
    cout<<"Enter the details of the cylinder \n";
    cout<<"Enter radius\n";
    int r1;
    cin>>r1;
    C1.getCir(r1);
    cout << "Enter the length and breadth\n";
    int l1,b2;
    cin>>l1>>b2;
    C2.getCylin(l1,b2);
    double cir_area1 = C1.areaCir();
    double cylin_vol = C2.volCylin();

    cout << "rectangle area by rectangle object : " << rect_area << endl;
    cout << "circle area by rectangle object : " << cir_area << endl;
    cout << "circle area by cylinder object : " << cir_area1 << endl;
    cout << "cylinder volume by cylinder object : " << cylin_vol << endl;
    return 0;
}
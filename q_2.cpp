// (Multilevel Inheritance) Modify the program no. LE6.1 as follows:
// Derive a class named as BOX from RECTANGLE class. Take necessary data & member
// functions for this box class to calculate the volume of the box. All the data members are
// initialized through the constructors. Show the result by accessing the area method of circle
// and rectangle and the volume method of box class through the objects of box class.



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
        return (3.14*(r*r));
    }  
};

class Reactangle : public Circle{
    protected:
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

class Box : public Reactangle{
    int h;
    public:
    void getBox(int le, int br, int ht){
        r = le;
        b = br;
        h = ht;
    }
    int volBox(){
        return (r*b*h);
    }
};

int main(){
    Box B1;
    int s1,s2,s3;
       cout<<"Enter the length ,breadth and height\n";
       cin>>s1>>s2>>s3;
    B1.getBox(s1,s2,s3);
    int volume = B1.volBox();
    Box B2;
    int r;
    cout<<"Enter the radius\n";
    cin>>r;
    B2.getCir(r);
    double cir_area = B2.areaCir();
    Box B3;
    int l,b;
    cout<<"Enter the length and breadth\n";
    cin>>l>>b;
    B3.getRect(l,b);
    int rect_area = B3.areaRect();
    cout << "Volume : " << volume << endl;
    cout << "Circle area : " << cir_area << endl;
    cout << "Rectangle area : "  << rect_area << endl; 
    return 0;
}
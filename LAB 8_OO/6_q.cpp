
// Write a program to design a class representing complex numbers and having functionality of
// performing addition and multiplication of two complex numbers using operator overloading.
// Re-write the program no.7.5 using friend function.

#include<iostream>
using namespace std;
class complex1{
    int real, imag;
    public:
        complex1(){
            cout<<"Enter the real and imaginary parts : ";
            cin>>real>>imag;
        }
        complex1(int a){
            real=imag=0;
        }
        friend complex1 operator+(complex1 a1, complex1 a2){
            complex1 t1(0);
            t1.real=a1.real + a2.real;
            t1.imag=a1.imag + a2.imag;
            return t1;
        }
        friend complex1 operator*(complex1 a1, complex1 a2){
            complex1 t1(0);
            t1.real=(a1.real*a2.real) + (a1.imag*a2.imag);
            t1.imag=(a1.imag*a2.real) + (a1.real*a2.imag);
            return t1;
        }
        void display(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }


};
int main(){
    complex1 a1, a2 ;
    complex1 a3(0);
    a3=a1+a2;
    a3.display();
    a3=a1*a2;
    a3.display();
}
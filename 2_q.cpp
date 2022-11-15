// Write a program to perform addition of two complex numbers using constructor overloading.
// The first constructor which takes no argument is used to create objects which are not
// initialized, second which takes one argument is used to initialize real and imaginary parts to
// equal values and third which takes two argument is used to initialize real and imaginary to
// two different values.

#include<iostream>
using namespace std;
class Complex{
	private:
	int imag, real;
	public:
		Complex(){
			
		}
		Complex(int r){
			imag = r;
			real = r;
		}
		
		Complex(int i, int r){
			imag = r;
			real = i;
		}
		
		Complex add(Complex a, Complex b){
			Complex c;
			c.imag = a.imag + b.imag;
			c.real = a.real + b.real;
			return c;
		}
		void display(){
			cout<<"The sum is = "<<real<< "+"<<imag<<"i"<<endl;
		}
};
int main(){
   int x,y;
    cout<<"Enter the value for a\n";
    cin>>x;
    cout<<"Enter the value for b\n";
    cin>>y;

	Complex a(x,y), d;
   int p,q;
    cout<<"Enter the value for a\n";
    cin>>p;
    cout<<"Enter the value for b\n";
    cin>>q;

	Complex b(p,q), c;
	c = d.add(a,b);
	c.display();
}
// Write a program to find out all roots of a quadratic equation
// three case 
// case 1
// d>0  -b(+-)sqrt(d)/2a
// 

#include <iostream>
#include<cmath>
using namespace std;
 int main ()
 {
     float a,b,c,x1,x2,real_part,imag_part,discriminant;
    //  x1 and x2 are roots     
     cout<<"Enter the value of a"<<endl;
          cin>>a;
     cout<<"Enter the value of b"<<endl;
     cin>>b;
     cout<<"Enter the value of c"<<endl;
     cin>>c;
discriminant= b*b -4*a*c;
     if(discriminant>0)
     {
         x1= (-b + sqrt(discriminant))/(2*a);
         x2= (-b - sqrt(discriminant))/(2*a);

         cout<<"Roots are real and different "<<endl;

         cout<<"x1 = "<< x1<<endl;
         cout<<"x2 = "<< x2<<endl;               
     }
     else if(discriminant == 0)
     {
         x1 = -b/(2*a);
         cout<<"x1 = "<< x1<<endl;
         cout<<"x2 = "<<x1<<endl;
    }
    else    
    { 
     real_part = -b/(2*a);
        imag_part =sqrt(-discriminant)/(2*a);
        cout<<"Roots are complex and different"<<endl;
        cout<<"x1 = "<<real_part<<endl;
        cout<<"x2 = "<<imag_part<<endl;
    }
    return 0;
 }
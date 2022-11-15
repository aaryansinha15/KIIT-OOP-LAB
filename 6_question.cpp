// Write a program to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n. n is the user input.
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    float n,a,sum=0;
    cout<<"Enter the terms for which you want to calculate"<<endl;
    cin >> n; 
    for(int i=1;i<=n;++i) 
    {
        a= 1/pow(i,i);
        cout<<"Therfore 1/"<<i<<"^"<<i<<"="<< a<<endl;
                sum+=a;
    }
     cout<<"The sum of the above series is " << sum <<endl;
    return 0;
}
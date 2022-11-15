// Write a program to find out the prime factors of a number entered through keyboard by using a
// user define function for this.

#include<iostream>
using namespace std;

void primefactors(int num)  
{  
    int count;  
  
 cout<<"\nPrime Factors of the number entered "<<num<<" are ..\n";  

    for(count = 2; num > 1; count++)  
    {  
        while(num % count == 0)  
        {  
            cout<<" "<<count; 
            num = num / count;  
        }  
    }  

    cout<<"\n";
}
    int main()  
{  
    int num;  
  
    printf("Enter a positive integer\n");  
   cin>>num;   
  
    primefactors(num);  
  
    return 0;  
}   
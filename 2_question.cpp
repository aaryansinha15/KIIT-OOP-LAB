// Write a program to check if two given non-negative integers have the same last digit.

#include<iostream>
using namespace std;
int main (){

int x,y,rem1,rem2;

cout<<"Please enter the value for x"<<endl;

cin >> x;

cout<<"Please enter the value for y"<<endl;

cin >> y;

rem1=x%10;
rem2=y%10;

if(rem1==rem2)
{
  cout<<"Yes the two numbers have the same last digit"<<endl;
}

else
{
    cout<<"No the two numbers do not have the same last digit"<<endl;
}


    return 0;
}
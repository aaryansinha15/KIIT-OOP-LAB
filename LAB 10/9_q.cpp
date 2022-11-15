// lab 9
 #include<bits/stdc++.h> 
using namespace std;

template <typename T> class maximum
{
T a, b; public:
maximum()
{
cout<<" Two Numbers: "; cin>>a>>b;
}
T display()
{
return (a>b?a:b);
}
};
int main()
{
maximum <int> obj;
cout<<"The greatest number is: "<<obj.display();
}
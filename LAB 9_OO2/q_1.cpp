// Write a program to create a class player having data members as player number, name, score.
// Now enter details of player by overloading extraction operator (>>) and display all the details
// by overloading insertion operator (<<)

#include<iostream>
using namespace std;
class xyz
{
    int p,q;
    public:
    void friend operator >> (istream &in, xyz &x1)
    {
        in>>x1.p;
        in>>x1.q;
    }
    void friend operator << (ostream &o1, xyz &x2)
    {
        o1<<x2.p<<endl;
        o1<<x2.q<<endl;
    }
    void friend operator >> (xyz &x1,istream &in)
    {
        in>>x1.p;
        in>>x1.q;
    }
    void friend operator << (xyz &x2, ostream &o1)
    {
        o1<<x2.p<<endl;
        o1<<x2.q<<endl;
    }
};
int main()
{
    xyz x11;
    xyz x22;
    cout<<"Enter two no.s\n";
    cin>>x11;
    cout<<x11;
    cout<<"Enter two no.s\n";
    cin>>x22;
    cout<<x22;
    cout<<"Enter two no.s\n";
    x11>>cin;
    x11<<cout;
    cout<<"Enter two no.s\n";
    x22>>cin;
    x22<<cout;
    return 0;
}
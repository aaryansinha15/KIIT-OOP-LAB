// (Pointers to objects) Define a class Item that is used to store and display the information
// regarding the item number and its price. Write a program to store and display the details of
// one items by using both normal object and pointer to object separately. Display appropriate
// message wherever necessary.


#include<iostream>
using namespace std;
class Item
{
    public:
    int q;
    float p;
    void input()
    {
        cout<<"Enter the price of the item\n";
        cin>>p;
        cout<<"Enter the quantity of the item\n";
        cin>>q;
    }
    void display()
    {
        cout<<"Price of item :"<<p<<endl;
        cout<<"Quantity of item : "<<q<<endl;
    }
};
int main()
{
    Item i,*p;
    cout<<"Without Pointer\n";
    i.input();
    i.display();
    p=&i;
    cout<<"With Pointer\n";
    p->input();
    p->display();
    return 0;   
}
// Write a program to store the author, title, price of n books & display the book details. n is the
// user input.

#include<iostream>
using namespace std;
char author ;
char title ;
int price;
void details()
{
    int n;
    cout<<"Enter the number of books\n";
    cin>>n;
     for(int i=0; i<n; i++)
     {
          cin>>author;
          cin>>title;
          cin>>price;
     }
}

void display()
{
          cout<<"Enter the Author name\n";
          cout<<"Enter the title\n";
          cout<<"Enter the price of the book\n";

}

int main ()
{
    details();


}


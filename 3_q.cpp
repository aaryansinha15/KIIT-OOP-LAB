// Create a 'DISTANCE' class with the following members:
// Data Members
// b) feet and inches
// Member Functions
// d) To input distance through constructor
// e) To output distance
// f) To add two distance objects
// Write a main function to create objects of DISTANCE class. Input two distances (one through
// implicit call and other explicit call and output the sum.


#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inches;
	public:
		void FindDistance()
		{
			cout<<"Enter an interger for feet: ";
			cin>>feet;
			cout<<"Enter an interger for inches: ";
			cin>>inches;
		}
		void DisplayDistance()
		{
			cout<<"Distance is: feet= "<<feet<<", inches= "<<inches<<endl;
		}
		void add(Distance x1, Distance x2)
		{
			feet = x1.feet + x2.feet;
			inches = x1.inches + x2.inches;
			feet = feet + (inches / 12);
			inches = inches % 12;
		}
};
int main()
{
	Distance x1, x2, x3;
	x1.FindDistance();
	x2.FindDistance();
	x3.add(x1, x2);
	x3.DisplayDistance();
	return 0;
}
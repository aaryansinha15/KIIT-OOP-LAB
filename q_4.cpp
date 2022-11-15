// (Multipath Inheritance) Design a base class called Student with two fields:- (i) Name (ii) roll
// number. Derive two classes called Sports and Exam from the Student base class. Class Sports
// has a field called s_grade and class Exam has a field called e_grade which are integer fields.
// Derive a class called Results which inherit from Sports and Exam. This class has a character
// array or string field to represent the final result. Also it has a member function called display
// which can be used to display the final result. Illustrate the usage of these classes in main.
#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    char name[20];
};

class Sports : virtual public Student
{
public:
    char sgrade[20];
    int class_s;
};

class Exam : virtual public Student
{
public:
    int egrade;
};

class Result : public Sports, public Exam
{
    char final_res[30];

public:
    void res()
    {
        cout << "Enter student details:";
        cout<<"\nNAME\nRoll\nSGrade\nClass\nEgrade\nFinal Result\n";
        cin >> name >> roll >> sgrade >> class_s >> egrade >> final_res;
        cout << "Name of student: " << name<<endl;
        cout << "Roll of student: " << roll<<endl;
        cout << "Sports grade of student: " << sgrade<<endl;
        cout << "Class of student: " << class_s<<endl;
        cout << " Exam grade of student: " << egrade<<endl;
        cout << "Final result of student: " << final_res<<endl;
    }
};

int main()
{
    Result res;
    res.res();
    return 0;
}

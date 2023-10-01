#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rollno;
    float marks;
};

int main()
{
    Student s1;     //creating object-1
    s1.name="Liz";
    s1.rollno=54;
    s1.marks=78.9;

    Student *s2=new Student;    //creating object-2 by new keyword
    s2->name="Pewpew";
    s2->rollno=76;
    s2->marks=81.5;

    cout<<"For student-1"<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll number: "<<s1.rollno<<endl;
    cout<<"Marks: "<<s1.marks<<endl;

    cout<<"\nFor student-2"<<endl;
    cout<<"Name: "<<s2->name<<endl;
    cout<<"Roll number: "<<s2->rollno<<endl;
    cout<<"Marks: "<<s2->marks<<endl;
}


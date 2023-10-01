#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        string major;
        double gpa;

    Student(string aName, string aMajor, double aGpa){
        name=aName;
        major=aMajor;
        gpa=aGpa;    
    };

    bool hasHonours(){
        if(gpa>=3.5)
            return true;
        else
            return false;
    };
};

int main(){
    Student s1("Jim","Business",4.6);
    Student s2("Pat","Computer Science",2.3);
    Student s3("Dan","History",3.5);

    cout<<s1.hasHonours()<<endl;
    cout<<s2.hasHonours()<<endl;
    cout<<s3.hasHonours()<<endl;
    return 0;
}
#include<iostream>
using namespace std;

class Book{
    public:
        string name;
        string author;
        int pages;

Book(){
    name="No Title";
    author="N/A";
    pages=0;
};

Book(string Aname,string Aauthor,int Apages){
    name=Aname;
    author=Aauthor;
    pages=Apages;
};
};

int main(){
    Book b1("Harry Potter","JK Rowling",400);
    Book b2("Lord of the Rings","Tholeim",500);
    Book b3;

    cout<<b1.pages<<endl;
    cout<<b3.name<<endl;
    cout<<b2.author<<endl;
    
    return 0;
}
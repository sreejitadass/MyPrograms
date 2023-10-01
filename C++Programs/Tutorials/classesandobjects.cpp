#include<iostream>
using namespace std;

class Book{
    public:
        string name;
        string author;
        int pages;
};

int main(){
    Book book1,book2;
    book1.name="Harry Potter";
    book1.author="JK Rowling";
    book1.pages=450;

    book2.name="Lord of the Rings";
    book2.author="Tolkein";
    book2.pages=500;

    cout<<"For book 1 "<<endl;
    cout<<"Author: "<<book1.author<<endl;
    cout<<"Book name: "<<book1.name<<endl;
    cout<<"Number of pages: "<<book1.pages<<endl;

    cout<<"For book 2 "<<endl;
    cout<<"Author: "<<book2.author<<endl;
    cout<<"Book name: "<<book2.name<<endl;
    cout<<"Number of pages: "<<book2.pages<<endl;

    return 0;
}

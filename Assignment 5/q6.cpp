#include<iostream>
using namespace std;
class Book{
    public:
    string title, author;
    float price;
    void details(){
        cout<<"Enter title"<<endl;
        cin>> title;
        cout<<"Enter author"<<endl;
        cin>> author;
        cout<<"Enter price"<<endl;
        cin>> price;

    }
};
class Textbook:public Book{
    public:
    string subject;
    
    void in(){
        details();
        cout<<"Enter subject"<<endl;
        cin>> subject;
    }
    void show(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Subject: "<<subject<<endl;

    }
};
int main(){
    Textbook t;
    t.in();
    t.show();
}
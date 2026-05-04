#include<iostream>
class Book{
    public:
    string title;
    string author;
    string ISBN;

    Book(){
        title ="";
        author ="";
        ISBN ="";
    }
    Book(string t,string a,string i){
        title =t;
        author= a;
        ISBN=i;
    }
};
class Library{
    Book b[100];
    int count;
    public:
    Library(){
        count = 0;
    }
    bool addNewBook(string &title ,string &author, string &ISBN){
        if (count >= 100){
            return false;
        }
        else{
            b[count] = Book(title, author, ISBN);
            count ++;
            return true;
        }
    }
    bool removeBooks(string &ISBN);

    void displayDetails(){
        for(int i = 0; i<count ; i++){
            cout<<"Book no. "<< i + 1<<endl;
            cout<<"Book title: "<<b[i].title<<endl;
            cout<<"Book author: "<<b[i].author<<endl;
            cout<<"Book ISBN: "<<b[i].ISBN<<endl;
        }
    }
};

bool Library::removeBooks(string &ISBN){
    for(int i = 0;i < count;i++){
        if(b[i].ISBN == ISBN){
            for(int j=i;j< count- 1;j++){
                b[j] = b[j+1];
            }
            count--;   
            return true;
        }
    }
    return false;  
}
int main(){
    Library l;
    
    int n;
    cout<<"How many books do you want to add? "<<endl;
    cin>>n;
    string title, author, ISBN;
    for(int i=0;i<n;i++){
        cout<<"\nEnter details for book "<<i+1<<endl;
        cout<<"Title: ";
        cin>>title;
        cout<<"Author: ";
        cin>>author;
        cout<<"ISBN: ";
        cin>>ISBN;
        l.addNewBook(title, author, ISBN);
    }
    cout<<"Books in Library:"<<endl;
    l.displayDetails();

    string a;
    cout<<"enter ISBN to remove: ";
    cin>> a;

    if(l.removeBooks(a)){
        cout<<"Book removed"<<endl;
    }
    else{
        cout<<"Book not found"<<endl;
    }
}
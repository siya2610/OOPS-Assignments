#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("hello.txt");
    string str= "HelloWorld";
    for(int i=0; i<str.length(); i++){
        fout<< str[i];
        cout<< "Position: "<< fout.tellp() << endl;
    }
    fout.close();
    fstream file("hello.txt", ios::in | ios::out);
    file.seekp(5);   
    file << "C++";  
    file.close();
}
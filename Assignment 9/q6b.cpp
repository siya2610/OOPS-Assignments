#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file("file.txt",ios::in | ios::out);
    file.seekp(4);   
    file<< 'X';     
    file.close();
}
#include<iostream>
#include<fstream>
using namespace std;

void readFile(){
    int count=0;
    ifstream fin;
    fin.open("notes.txt");
    char c;
    while(fin.get(c)){
        cout<<c;
        if((c>= 'A' && c<= 'Z') || (c>= 'a' && c<= 'z')){
            count++;
        }
    }
    cout<<count;
    fin.close();
}
int main(){
 readFile();
 return 0;
}
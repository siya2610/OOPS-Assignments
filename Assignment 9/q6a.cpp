#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("file.txt");
    for(char c='A'; c<='Z'; c++){
        fout << c;
    }
    fout.close();
    ifstream fin("file.txt");
    fin.seekg(9);  
    char ch;
    fin.get(ch);
    cout<< "10th character: " << ch;
    fin.close();
}
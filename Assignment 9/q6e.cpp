#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("data.txt");
    fout<< "Hello\nThis is file\nC++ programming";
    fout.close();
    ifstream fin("data.txt");
    fin.seekg(9);
    cout<< "Position: " << fin.tellg() << endl;
    char c;
    while(fin.get(c)){
        cout<< c;
    }
    fin.close();
}
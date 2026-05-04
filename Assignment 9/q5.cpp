#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Length: "<< str.length()<< endl;
    ofstream fout("data.txt");
    fout << str;
    fout.close();

    ifstream fin("data.txt");
    string line;
    cout<< "Content from file: ";
    while(getline(fin, line)){
        cout<< line;
    }
    fin.close();
    return 0;
}
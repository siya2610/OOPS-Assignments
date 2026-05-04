#include<iostream>
#include<fstream>
using namespace std;

int main(){
   ifstream fin;
   fin.open("text.txt");
   ofstream fout;
   fout.open("copy.txt");
   char c;
   while(fin.get(c)){
       fout<< c;
   }
   fin.close();
   fout.close();
}
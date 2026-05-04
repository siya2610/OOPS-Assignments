#include<iostream>
using namespace std;

class Account{
private:
    const long accountNumber;
    long transactionID;
    string transactionType;
    double bal;
    static long nextID;
public:
    Account(long acc,double b):accountNumber(acc),bal(b){
        transactionID=0;
        transactionType="None";
    }

    long depositAmount(const long &to,const long &from,const double &amount){
        if(accountNumber==to){
            bal+=amount;
            transactionType="Credit";
            transactionID=++nextID;
        }
        return transactionID;
    }
    long creditAmount(const long &to,const long &from,const double &amount){
        if(accountNumber==from){
            bal-=amount;
            transactionType="Debit";
            transactionID=++nextID;
        }
        return transactionID;
    }
    long getAccNo() const{
        return accountNumber;
    }

    void displayDetails() const{
        cout<<"Account: "<<accountNumber<<endl;
        cout<<"Balance: "<<bal<<endl;
        cout<<"Last Transaction: "<<transactionType<<endl;
        cout<<"Transaction ID: "<<transactionID<<endl;
    }
};
long Account::nextID=1000;

int main(){
    int n;
    cout<<"Enter number of accounts: ";
    cin>>n;
    Account *acc[n];
    long no;
    double bal;
    for(int i=0;i<n;i++){
        cout<<"Account Number: ";
        cin>>no;
        cout<<"Initial Balance: ";
        cin>>bal;
        acc[i]=new Account(no,bal);
    }

    long from,to;
    double amt;
    cout<<"Sender Account: ";
    cin>>from;
    cout<<"Receiver Account: ";
    cin>>to;
    cout<<"Amount: ";
    cin>>amt;

    for(int i=0;i<n;i++){
        acc[i]->creditAmount(to,from,amt);
        acc[i]->depositAmount(to,from,amt);
    }
    for(int i=0;i<n;i++){
        acc[i]->displayDetails();
        delete acc[i];
    }
}
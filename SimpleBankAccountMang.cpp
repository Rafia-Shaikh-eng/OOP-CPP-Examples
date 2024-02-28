#include<iostream>
using namespace std;

class BankAccount{
    //data members
    private:
    int accountNumber;
    double balance;
    protected:
    string accountHolderName;
    public:
    //constructor
    BankAccount(){}
    BankAccount(int a, string n){
        accountNumber=a;
        accountHolderName=n;
        // accountNumber++;
        cout<<"Account "<<accountNumber<<" Created Successfully."<<endl;
    }
    //methods
    void deposit(double amount){
        balance+=amount;
        cout<<"Depositing funds to Account "<<accountNumber<<endl;
        cout<<"Deposit Successful. Current Balance: $"<<balance<<endl;

    }
    void withdraw(double amount){
        cout<<"Withdrawing funds from Account "<<accountNumber<<endl;
        if(amount>balance)
            cout<<"Insufficient Balance. Withdrawal Failed."<<endl;
        else
            cout<<"Withdrawal Successful. Current Balance: $"<<balance<<endl;
    }
};

int main(){
    
    cout<<"Creating Bank Accounts..."<<endl;
    //create an account 
    BankAccount account1(1,"Ali");
    BankAccount account2(2,"Ahmed");
    cout<<endl;
    account1.deposit(500);
    cout<<endl;
    account2.withdraw(200);
    cout<<endl;
    account1.withdraw(200);
    return 0;
}
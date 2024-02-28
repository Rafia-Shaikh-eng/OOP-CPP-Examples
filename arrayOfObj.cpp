#include<iostream>
using namespace std;


class Employee{

    private:
    string name;
    int id;
    public:
    int getId(){
        return id;
    }
    //setEmpInfo
    void setEmpInfo(){
        cout<<"\nEnter name : ";
        cin>>name;
        // cin.ignore(); // Ignore the newline character left in the input buffer
        cout<<"Enter id : ";
        cin>>id;
        // cin.ignore(); // Ignore the newline character left in the input buffer

    }
    //display info
    void displayInfo(){
        // cout<<"Employees Info\n";
        cout<<"Name:\t"<<name<<endl;
        cout<<"Id:\t"<<id<<endl;
    }

};

int main(){
    //create array of obejcts of class emp
    Employee emp[10];
    int size;
    cout<<"How many employees are ? "<<endl;
    cin>>size;
    //take data input from user 
    for(int i=0; i<size; i++){
        emp[i].setEmpInfo();
    }
    //display employees info 
    for(int i=0; i<size; i++){
        cout<<"Employee "<<emp[i].getId()<<" info : "<<endl;
        emp[i].displayInfo();

    }
    return 0;
}
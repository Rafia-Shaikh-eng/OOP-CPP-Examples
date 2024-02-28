#include<iostream>
using namespace std;


class Array{
    int data;
    public:
    //constructor 
    Array(int data){
        this->data=data;
    }
    //getter
    int getData() const{
        return data;
    }
};
int main(){
    //array of objects
    Array A[3]={Array(10), Array(20), Array(30)};

    cout<<"Object 1 data is : "<<A[0].getData()<<endl;
    cout<<"Object 2 data is : "<<A[1].getData()<<endl;
    cout<<"Object 3 data is : "<<A[2].getData()<<endl;
    return 0;
}
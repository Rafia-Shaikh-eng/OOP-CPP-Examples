#include<iostream>
using namespace std;
class copCons{
    //data members
    int data;
    int *p; //pointer 
    public:
    //default cons
        copCons(){
           data=0;
           p=new int; //memory allcation 
           *p=0; 
        }
    //para cons
        copCons(int d, int pData){
            data=d;
            p=new int; //memory allcation 
           *p=pData;
        }
    //setter
        void setValues(int d, int pData){
            data=d;
            *p=pData;
        }
    //Display method
    void disply(){
        cout<<"Data = "<<data<<endl;;
        cout<<"Pointer = "<<*p<<endl;
    }

    //user defined copy constructor
    //deep copy -  cuz we used pointer 
    copCons(const copCons &otherObj){
        data=otherObj.data;
        // p=otherObj.p;
         p=new int;
        *p=*(otherObj.p);
    }
    //user defined destructor 
    ~copCons(){
        delete p;
    }

};

int main(){
    copCons obj1(10,11);//data=10
    copCons obj2=obj1; 
    cout<<"Obj1's data\n";
    obj1.disply();
    cout<<"obj2's data\n";
    obj2.disply();
    obj2.setValues(20, 12);
    cout<<"---------------------------\n";
    cout<<"After updating data of obj2\n";
    cout<<"Obj1's data\n";
    obj1.disply();
    cout<<"Obj2's data\n";
    obj2.disply();
  

    return 0;
}
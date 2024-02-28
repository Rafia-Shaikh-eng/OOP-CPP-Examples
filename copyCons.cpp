#include<iostream>
using namespace std;

class CopyCons{
    int data;
    int *p;
    public:
        //use constructor 
        CopyCons(int n, int pData){
            data=n;
            p=new int;
            *p=pData;
        }
        //get value
        void setData(int d, int pData){
           data=d;
           *p=pData;
        }
        //get value
        void getData(){
            cout<<"Data : "<<data<<endl;
            cout<<"Pointer : "<<*p<<endl;
        }
        //deep copy constructor 
        CopyCons(const CopyCons &OtherObj){
            p=new int;
            data=OtherObj.data;
            *p=*(OtherObj.p);
        }
};

int main(){
    //object of CopyCons class
    CopyCons obj1(10, 99);
    //object of CopyCons class
    CopyCons obj2(obj1);
    cout<<"Data with the reference of Object1 : "<<endl;
    obj1.getData();
    cout<<"Data with the reference of Object2 : "<<endl;
    obj2.getData();
    obj2.setData(20, 100);
    cout<<"After changing obj2 data : "<<endl;
    cout<<"Data with the reference of Object1 : "<<endl;
    obj1.getData();
    cout<<"Data with the reference of Object2 : "<<endl;
    obj2.getData();

    return 0;
}
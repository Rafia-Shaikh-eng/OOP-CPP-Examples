#include<iostream>
using namespace std;


class StaticExample{
    public:
        int num=10;
        const int* ptrNum=&num;
};

int main(){
   //object of class
   StaticExample obj1;
   int data=100;
   obj1.ptrNum=&data;

   cout<<"num is "<<obj1.num<<endl;
   cout<<"pointer of num is "<<obj1.ptrNum<<endl;
   cout<<"*ptrNum is "<<*(obj1.ptrNum)<<endl;
    



}   
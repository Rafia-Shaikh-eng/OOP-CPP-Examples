#include<iostream>
using namespace std;

class testInlineFun{
    public:
        //function declared 
        void inLineFun();

};
//inline function 
inline void testInlineFun::inLineFun(){
    cout<<"Hello, I am an inline function\n";
}

int main(){
    //create the object of class testInlineFun
    testInlineFun obj;git
    obj.inLineFun();
    return 0;
}
#include<iostream>
using namespace std;


class test{
    public:
    mutable int i;
    int j;
    public:
    //default cons
    test(){
        i=0;
        j=0;
    }
    void changeData() const{
        i++;
        j++; //
    }

};
int main(){
    //object of test class 
    const test t1; //i=0
    t1.changeData();
    return 0;    
}
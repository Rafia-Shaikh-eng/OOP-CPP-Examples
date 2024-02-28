#include<iostream>
using namespace std;
//find error(s)
//Q#01(g)
// class ConstantValueContainer { 
// private:  
//     const int value;  
//     //pointer will be pointing to the const value/data because ptr=&value and 'value' is const  
//     const int* const ptr; 
// public: 
//     ConstantValueContainer(int initialValue) : value(initialValue), ptr(&value) { } 
//     void displayValue() const { 
//     cout << "Value through the constant pointer: " 
//     << *ptr <<endl;   } 
//     // void modifyValue() { *ptr = 99; } 
// }; 
// int main() { 
//     ConstantValueContainer container(42); 
//     // container.modifyValue(); 
//     container.displayValue(); 
// } 

//Q#1(h)
class Complex 
{ 
    private: 
    static double x,y; 
    static int z; 
    public: 
    //error 1 definition of complex constructor is missing
    Complex (double = 0.0); 
     
    //non static members are accessed within the static method 
    static int doSomething() { z=2* y; return z; 
    }
};

Complex::Complex(double a){
    cout<<"Constructor is called !"<<endl;
}

int main(){
    Complex c;
}
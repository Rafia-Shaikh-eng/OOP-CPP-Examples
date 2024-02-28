#include <iostream>
using namespace std; 

class MyClass {
private:
    int* ptr; // Pointer to dynamically allocated memory on the heap
    int data;


public:
    // Constructor: Allocates memory on the heap
    MyClass(int d, int value) {
      data=d;
        ptr = new int(value);
    }

    // Shallow copy constructor
    // MyClass(const MyClass& other) : data(other.data), ptr(other.ptr){}

    // Deep copy constructor
    MyClass(const MyClass& other){
        data=other.data;
        //dynamic memory allocation
        ptr=new int;
        *ptr=*(other.ptr);
    }

    // Destructor: Deallocates memory on the heap
    ~MyClass(){
        delete ptr;
    }

    // Getter method
    int getPtr() const {
        return *ptr;
    }
    int getData() const {
        return data;
    }
    
};

int main() {
    // Create an object on the stack
    MyClass obj1(2,10);
    // MyClass obj2=obj1; //let’s say we don’t have deep copy constructor. 
    MyClass obj3(obj1); //let’s say we do have user defined copy constructor(deep copy).
    return 0;
}

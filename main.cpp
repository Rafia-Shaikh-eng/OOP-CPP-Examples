#include<iostream>
using namespace std;


// class student{
//     //data members
//     int StId, age;
//     int *ptr;
//     //functions
//     public:
//     student(int s, int a, int value){
//         StId=s;
//         age=a;
//         ptr=new int; //heap 
//         *ptr=value;
//     }
//     void setValues(int s, int a){
//         StId=s;
//         age=a;

//     }

//     void displayS(){
//         cout<<"Student St id : "<<StId<<endl<<"Student age : "<<age<<endl<<"Ptr data is : "<<*ptr<<endl;
//     }
//     ~student(){
//         delete ptr;
//     }

// };
// int main(){
//     student s1(11,21, 10); 
//     s1.displayS();


//     return 0;
// }





//shallow copy example (default constructor is used in this class)
class ShallowCopyExample {
    private:
        int *data; //pointer
       
    public:
        // Constructor
        ShallowCopyExample(int val) {
            data = new int; //dynamic memory allocation 
            *data = val;
        }

        // Destructor
        ~ShallowCopyExample() {
            delete data;  
        }

        // Setter
        void setData(int val) {
            *data = val;
        }

        // Getter
        int getData() {
            return *data;
        }
};
// deep copy(user defined copy constructor is used in this below class)
class DeepCopyExample {
    private:
        int *data;

    public:
        // Constructor 
        DeepCopyExample(int val) {
            data = new int;
            *data = val;
        }

        // Copy Constructor (Deep Copy)
        DeepCopyExample(const DeepCopyExample& other) {
            // Creating a new memory space and copying the value
            data = new int;
            *data = *other.data;
        }
        void setData(int m){
            *data=m;
        }

        // Getter
        int getData() {
            return *data;
        }

        // Destructor
        ~DeepCopyExample() {
            delete data;
        }
};

int main() {
    // Creating an object
    ShallowCopyExample S_obj1(5);

    // Creating another object and copying obj1 to obj2 (shallow copy)
    ShallowCopyExample S_obj2 = S_obj1; //1001 =10
   
   
    cout<<"\n------------------------\n";
    cout<<"Shallow copy examples";
    cout<<"\n------------------------\n";
    // Printing data in both objects
    cout << "Data in obj1: " << S_obj1.getData() << endl; //5
    cout << "Data in obj2: " << S_obj2.getData() << endl;//5
    // // Modifying data in obj1
    S_obj2.setData(10);

    cout << "----- After changing data ------"<<endl;
    // // Printing data in both objects
    cout << "Data in obj1: " << S_obj1.getData() << endl; //10
    cout << "Data in obj2: " << S_obj2.getData() << endl; //10
    //-----------------------------------------------------------------------


// Creating an object of DeepCopyExample
    DeepCopyExample D_obj1(5);

    // Creating another object using the copy constructor (deep copy)
    DeepCopyExample D_obj2 = D_obj1;

    

    
    cout<<"\n\n------------------------\n";
    cout<<"Deep copy examples";
    cout<<"\n------------------------\n";
    // Printing data in both objects
    cout << "Data in obj1: " << D_obj1.getData() << endl;
    cout << "Data in obj2: " << D_obj2.getData() << endl;

    // Modifying data in obj1
    D_obj1.setData(10);
    // Printing data in both objects
    cout << "----- After changing data ------"<<endl;
    cout << "Data in obj1: " << D_obj1.getData() << endl;
    cout << "Data in obj2: " << D_obj2.getData() << endl;

    return 0;
}


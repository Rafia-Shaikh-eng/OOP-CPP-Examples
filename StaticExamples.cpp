#include<iostream>
using namespace std;
//class student
class student{
    public:
        //static data member(s)
        static string uni;

        //non static function 
        static void print(){
            cout<<"Hello, This is static function!"<<endl;
        }

        //static function members
        static void FunMem(){
            cout<<"Hello, I am static member function"<<endl;
            print();

        }
};
 string student::uni="NUCES";

int main(){
    student s1, s2;
    cout << s1.uni<<endl<<s2.uni<<endl;
    s2.uni="NED";
    cout << s1.uni<<endl<<s2.uni<<endl;

    return 0;
}
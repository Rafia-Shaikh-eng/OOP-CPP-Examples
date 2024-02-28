#include<iostream>
using namespace std;

//class
class student{
    public:
        string name;
        static string uni;

        void displyInfo(){
            cout<<"Name = "<<name<<endl;
            cout<<"Uni = "<<uni<<endl;
        }

        //static function members 
        //static function can only access static memebers 
        static void StaticPrint(){
            cout<<"This is static function"<<endl;
        }
        void NonStaticPrint(){
            cout<<"This is static function"<<endl;
        }

        static void test(){
            cout<<"Name = "<<uni<<endl;
            StaticPrint();
            NonStaticPrint();
        }
        
};
string student::uni="Fast NUCES";


int main(){
    //let's us create multiple objects of the class
    student s1, s2;
    s1.name="Ali";
    student::uni="NED";
    s2.name="Ahmed";
    // s2.uni="KU";
    cout<<"Display data members with the reference of the object s1"<<endl;
    s1.displyInfo();
     cout<<"Display data members with the reference of the object s2"<<endl;
    s2.displyInfo();
    return 0;
}
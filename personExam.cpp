#include<iostream>
using namespace std;

class person{
    private:
        string name;
        int age;
    public:
        // person(string n, int a) {
        //     name=n;
        //     age=a;
        // }
        //setter of age 
        void setAge(int a){
                age=a;
        }
        void setName(string n){
                name=n;
        }
        // int getAge(){
        //     return  age;
        // }
        string getName(){
            return name;
        }

        // void setAndget(){
        //     cout<<"Enter age : ";
        //     cin>>age;
        //     cout<<age<<endl;
        // }   


};

int main(){
    person p1;
    p1.setName("NUCES");
    cout<<p1.getName();

   
    return 0;
}
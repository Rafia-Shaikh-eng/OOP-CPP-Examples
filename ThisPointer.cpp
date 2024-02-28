#include<iostream>
using namespace std;
class test{
    private:
        int x, y;
    public:
    //This is used to return reference to the calling object
       test& setX(int x){
            //This is used when local variable’s name is same as member’s name
            this->x=x;
            return *this;
        }

       test& setY(int y){
            this->y=y;
            return *this;
        }

        int sumXY(){
            return x+y; 
            
        }

};
int main(){
    //create object of class test
    test t1;
    /*When a reference to a local object is returned, the returned reference can be
    used to "chain function calls" on a single object*/
    cout<<"Sum is : "<<t1.setX(2).setY(2).sumXY()<<endl;
}

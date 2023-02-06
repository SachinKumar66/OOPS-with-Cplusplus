#include<iostream>
using namespace std;
// the problem with multiple inheritance is that if there is same name function in 
// different classes and is inherited by other class , if we call the fuction it 
// cannot decide which function it should run  
class base1{
    public:
    void greet(){
        cout<<"hi,how are you?"<<endl;
    }

};
class base2{
    public:
    void greet(){
        cout<<"hlo,kaisa ho?"<<endl;
    }
};
class derived:public base1,public base2{
    int a=10;
    public:
    // void greet(){
        // cout<<"fine";
    // }
};
int main(){
    base1 obj1;
    base2 obj2;
    derived obj3;
    obj1.greet();
    obj2.greet();
    // obj3.greet();
    // this will give error 
    return 0;
}
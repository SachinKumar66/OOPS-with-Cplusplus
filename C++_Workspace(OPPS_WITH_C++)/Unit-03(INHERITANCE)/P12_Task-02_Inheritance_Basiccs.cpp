#include<iostream>
using namespace std;
class ABC{
    public:
    int a;
    void display(){
        cout<<"entered";
    }

};
class ABCD : public ABC{
    public:
    void display2(){
        display();
        // you cannot use the display function in class directly 
        // you should use in either constructor or method
    }
};
int main(){
    ABCD obj;
    obj.display2();
    // call parent class method from main    
    obj.display();
    return 0;
}
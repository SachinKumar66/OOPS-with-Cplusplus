#include<iostream>
using namespace std;
// function over writing 
class base{
    public:
    int var=10;
    void display(){
        cout<<var<<endl;
    }
};
class derived:public base{
    public:
    int vard=20;
    void display(){
        cout<<var<<endl;
        cout<<vard<<endl;
    }

};
int main(){
    base obj;
    derived obj2;
    obj.display();
    obj2.display();
    return 0;
}
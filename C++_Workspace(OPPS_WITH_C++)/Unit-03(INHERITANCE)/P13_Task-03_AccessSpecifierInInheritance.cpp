#include<iostream>
using namespace std;
class base{
    public:
    int number=99;
    
    void display(){
        cout<<"the no in base class is:"<<number<<endl;
    }
};
class derived1: public base{
    public:
    void display1(){
        cout<<"the no in public is:"<<number<<endl;
    }

};
class derived2: protected base{
    public:
    void display2(){
        cout<<"the no in protected is:"<<number<<endl;
    }

};
class derived3: private base{
    public:
    void display3(){
        cout<<"the no in private is:"<<number<<endl;
    }

};
int main(){
    base b;
    derived1 d1;
    derived2 d2;
    derived3 d3;
    b.display();
    d1.display1();
    d1.display();
    d2.display2();
   // d2.display();//inaccessible
    d3.display3();
   // d3.display();//inaccessible
    return 0;
}


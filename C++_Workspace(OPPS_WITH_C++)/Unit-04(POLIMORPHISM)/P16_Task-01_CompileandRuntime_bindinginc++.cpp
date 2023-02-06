#include<iostream>
using namespace std;
    
class Base
{
public:
    void show() { cout<<" In Base \n"; }
};
    
class Derived: public Base
{
public:
    void show() { cout<<"In Derived \n"; }
};
class Base1
{
public:
    virtual void show() { cout<<" In Base \n"; }
};
    
class Derived1: public Base1
{
public:
    void show() { cout<<"In Derived \n"; }
};

    
int main()
{
    Base *bp = new Derived;
  
    // The function call decided at 
    // compile time (compiler sees type
    // of pointer and calls base class
    // function.
    bp->show();  

    Base1 *bp1 = new Derived1;
    bp1->show();  // RUN-TIME POLYMORPHISM
  
    return 0;
}
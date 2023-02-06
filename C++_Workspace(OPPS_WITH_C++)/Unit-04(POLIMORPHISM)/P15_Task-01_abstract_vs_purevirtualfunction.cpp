#include<iostream>
using namespace std;
/*A pure virtual function is a virtual function in C++ for which we need not to write any function definition and only we have to declare it. It is declared by assigning 0 in the declaration.

An abstract class is a class in C++ which have at least one pure virtual function.*/

class B {
   public:
      virtual void s() = 0; // Pure Virtual Function
    //   do noting function 
};

class D:public B {
   public:
      void s() {
         cout << "Virtual Function in Derived class\n";
      }
};

int main() {
   B *b;
   D obj;
   b = &obj;
   b->s();
}

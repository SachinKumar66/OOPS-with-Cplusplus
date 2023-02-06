#include<iostream>
using namespace std;
class Mammal{
    public:
        void display1(){
            cout<<"i am mammal"<<endl;}
};
class MarineAnimals{
    public:
    void display2(){
        cout<<"i am a marine animal"<<endl;
    }


};
class BlueWhale:public Mammal,public MarineAnimals{
    public:
     void display3(){
        cout<< " i belong to both"<<endl;
    }
};
int main(){
    Mammal obj1;
    obj1.display1();
    MarineAnimals obj2;
    obj2.display2();
    BlueWhale obj3;
    obj3.display3();

    cout<<"all of them"<<endl;
    obj3.display1();
    obj3.display2();
    obj3.display3();


return 0;
}
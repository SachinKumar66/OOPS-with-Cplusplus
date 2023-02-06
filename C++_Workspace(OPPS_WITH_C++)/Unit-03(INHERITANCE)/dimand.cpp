#include<iostream>
using namespace std;
class Mammal{
    public:
        void display(){
            cout<<"i am mammal"<<endl;}
};
class MarineAnimals{
    public:
    void display(){
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
    obj1.display();
    MarineAnimals obj2;
    obj2.display();
    BlueWhale obj3;
    obj3.display3();

    cout<<"all of them"<<endl;
    // obj3.display();
    // cannot determine which display function is used here 
    obj3.display3();


return 0;
}
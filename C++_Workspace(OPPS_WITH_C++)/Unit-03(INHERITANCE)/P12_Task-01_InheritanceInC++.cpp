#include<iostream>
using namespace std;
class account{
    public:
        float salary=60000;
};
class employee: public account{
    public:
    float bonus =5000;
    public:
    void display(){
        cout<<salary<<endl;
    }
};
int main(){
    employee p1;
    cout<<p1.bonus<<endl;
    p1.display();
    cout<<p1.salary<<endl;
    return 0;

}
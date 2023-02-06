#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        string name;
        int roll_number;
        int phone;
        string address;
    public:
        Student(string name,int roll_number,int phone,string address){
            this->name=name;
            this->roll_number=roll_number;
            this->phone=phone;
            this->address=address;
            
        }
        void display(){
            cout<<"name: "<<name<<endl;
            cout<<"roll number: "<<roll_number<<endl;
            cout<<"phone: "<<phone<<endl;
            cout<<"address: "<<address<<endl;
            
        }
};
int main(){
    Student obj1("sam",123,9999999,"dehradun");
    Student obj2("raman",223,9999999,"delhi");
    obj1.display();
    obj2.display(); 
    return 0;
}
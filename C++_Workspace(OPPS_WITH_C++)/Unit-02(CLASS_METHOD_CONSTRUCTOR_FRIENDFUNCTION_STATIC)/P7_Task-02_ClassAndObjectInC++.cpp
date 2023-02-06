#include<iostream>
#include<string>
using namespace std;
 
class Student{
 
 private:
 string name;
 int age;
 char section;
 int marks;
 string college;
 
 public:
 
 void setData(string name, int age, char section, int marks,
 string college){
 
 this->name = name;
 this->age = age;
 this->section = section;
 this->marks = marks;
 this->college = college;
 
 }
 
 int getMarks(){
 return this->marks;
 }
};
 
int main(){
 
 Student obj[4];
 
 obj[0].setData("Rohit", 43, 'A', 88, "GEHU");
 
 obj[1].setData("Sharfaraz", 33, 'A', 90, "GEHU");
 
 obj[2].setData("Sumit", 3, 'A', 70, "GEHU");
 
 obj[3].setData("lucky", 21, 'A', 95, "GEHU");
 
 int total = obj[0].getMarks() + obj[1].getMarks() + obj[2].getMarks() + obj[3].getMarks();
 
 cout << "Total Marks: " << total << endl;
 
 return 0;
}
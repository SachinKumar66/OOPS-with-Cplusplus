#include<iostream>
using namespace std;
int main()
{
   int a=10;
   int b=12;

    // Arithmetic operators [+,-,*,/]
    cout<<a+b<<endl;
    
   
    // Reminder operators [%]
    cout<<a%b<<endl;        //10

    
    // Arithemetic assignment opeartors
    int c=10;
    c+=a;          // c=c+a;
    cout<<c<<endl;


    // Increment and decrement operators[++,--]
    // postfix and prefix operators
    cout<< a++<<endl;           //prefic decrement
    cout<< a--<<endl;           //postfix decrement



    // Logical operators [&&,||,!]
    if(a>1&&b<2){
        cout<<"and"<<endl;
    }
    if(a>1||b<2){
        cout<<"or"<<endl;
    }
    if(a!=2){
        cout<<"not"<<endl;
    }


    // bitwise operators 
    if(a>1&b<2){
        cout<<"and"<<endl;
    }
    if(a>1|b<2){
        cout<<"or"<<(a>1|b<2)<<endl;
    }


    // Conditional operators 
    int n1=5,n2=10,max;
    max=(n1>n2)?n1:n2;
    cout<<"Largest number between"<<max;


    // relational operaters [<,>,>=,<=]  -->  {true,false}
    if(a>b)
    {
        cout<<"ok"<<endl;
    }

    return 0;
}

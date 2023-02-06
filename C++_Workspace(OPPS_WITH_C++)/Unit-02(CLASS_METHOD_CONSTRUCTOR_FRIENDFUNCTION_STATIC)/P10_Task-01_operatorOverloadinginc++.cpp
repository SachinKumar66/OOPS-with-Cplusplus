#include<iostream>
#include<string>
using namespace std;
string operator+(string s,int a){
    string c= to_string(a);
    return s+c;
}

int main(){
    int a=10;
    string s="ABC";
    string c=s+a;
    cout<<"final string:"<<c<<endl;
    return 0;

}
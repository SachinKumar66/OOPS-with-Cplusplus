#include<iostream>
using namespace std;
#include<string>
// String are not mutable(can be changed in its owm memory address) in c++.
int main()
{
 string a="Hello";
 cout<<&a<<endl;
 a[0]='j';
 cout<<&a<<endl;
 cout<<a<<endl;
 return 0;
}
#include<iostream>
using namespace std;
#include<string>
int palindrome()
{
 string name;
 cout<<"Enter the string:";
 cin>>name;
 int j=name.size()-1;
 for(int i=0;i<name.size()/2;i++,j--)
 {
 if(name[i]!=name[j])
 {
 cout<<"Not Palindrome"<<endl;
 return 0;
 }
 }
 cout<<"Palindrome"<<endl;
 return 1;
}
int main(){
    palindrome();
    return 0;
}
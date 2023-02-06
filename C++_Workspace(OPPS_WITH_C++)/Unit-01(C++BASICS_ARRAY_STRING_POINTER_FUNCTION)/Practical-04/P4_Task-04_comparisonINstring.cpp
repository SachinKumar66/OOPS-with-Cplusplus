#include<iostream>
using namespace std;
#include<string>
// String Comparison function 
// syntax: string1.compare(string 2)
void CompareString()
{
 string s1,s2;
 cout<<"Enter two strings:";
 cin>>s1>>s2;
 int x=s1.compare(s2);
 if(x>0)
 cout<<"str 1 is large"<<endl;
 else if(x<0)
 cout<<"str2 is large"<<endl;
 else //x==0
 cout<<"str1 is equal to str2"<<endl;
}
int main(){
    CompareString();
    return 0;

}

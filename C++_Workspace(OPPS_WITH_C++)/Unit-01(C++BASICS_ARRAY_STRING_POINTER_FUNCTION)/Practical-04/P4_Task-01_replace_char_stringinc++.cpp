#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    cout<<a<<endl;
    int i=0;
    while(a[i]!='\0')
    {
        int s=a[i];
        if(s>=97 && s<122)
        {
            s=s+1;
        }
        else if(s==122)
        {
            s=97;
        }
        a[i]=s;
        
        i++;
        
    }
    for(int i=0;i<a.size();i++)
 {
 if(a[i]>='A'&& a[i]<='Z')
 {
 if(a[i]=='Z')
 a[i]='A';
 else{
 a[i]+=1;
 }
 }
 }

    cout<<a;
    return 0;
}
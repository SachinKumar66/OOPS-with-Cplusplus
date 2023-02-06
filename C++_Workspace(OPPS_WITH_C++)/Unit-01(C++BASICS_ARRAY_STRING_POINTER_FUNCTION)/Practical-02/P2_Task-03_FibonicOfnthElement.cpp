#include<iostream>
using namespace std;
int fab(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fab(n-1)+fab(n-2);//0 1 1 2 3 5 8
    }
}
int main()
{
    cout<<"enter the limit "<<endl;
    int n;
    cin>>n;
    cout<<"enter the variable want to check";
    int v;
    cin>>v;
    for(int i=0;i<n;i++){
        cout<<fab(i)<<endl;
        if(v==fab(i))
        {
            cout<<"number found"<<i<<endl;
        }
    }
    return 0;
}

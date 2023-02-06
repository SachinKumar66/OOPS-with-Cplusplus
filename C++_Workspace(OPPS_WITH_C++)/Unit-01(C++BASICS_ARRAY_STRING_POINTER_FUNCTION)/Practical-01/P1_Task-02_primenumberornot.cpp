#include<iostream>
using namespace std;
int prime1(int);
int prime2(int);
int sqrt(int);
int prime3(int);
int odd_even(int);
int main(){
    int i,j;
    cout<<"enter no.";
    cin>>i;
    j=prime1(i);
    if(j==2){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    prime2(i);
    prime3(i);
    odd_even(i);
    return 0;
}
int prime1(int n){
    int c=2,i;
    for(i=2;i<n;i++){
        if(n%i==0){
            c++;
        }   
    }
    return c;
}
int prime2(int n){
    int c=0,i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==0){
        cout<<"prime2"<<endl;
    }
    else{
        cout<<"not prime2"<<endl;
    }
    return 0;
}
int sqrt(int n){
    int i=1;
    int r=1;
    while(r<=n){
        i++;
        r=i*i;
    }
    cout<<"sqrt="<<i-1<<endl;
    return i-1;
}
int prime3(int n){
    int i,c=0;
    int r=sqrt(n);
    for(i=0;i<=r;i++){
        if(n%i==0){
            c++;}
    }
    if(c==0){
            cout<<"prime3"<<endl;
        }
        else{
            cout<<"notprime3"<<endl;
        }
return 0;
}
int odd_even(int n){
    int i,c=0;
    if(n%2==0){
        c++;
    }
    if(n%3==0){
        c++;
    }
    if(n%5==0){
        c++;
    }
    if(c==0){
        cout<<"primeodd-even"<<endl;
    }
    else{
        cout<<"notprime"<<endl;
    }
return 0;
}
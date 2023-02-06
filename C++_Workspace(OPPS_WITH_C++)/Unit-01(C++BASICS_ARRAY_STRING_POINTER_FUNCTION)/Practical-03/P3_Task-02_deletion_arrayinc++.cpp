#include<iostream>
using namespace std;
void delete1(){
    int a[8]={1,2,4,3,5,6,7,8};
    int k=4,j=0,i;
    for(i=0;i<8;i++){
        if(a[i]==k){
            continue;
        }
        a[j]=a[i];
        j++;
    }
    cout<<"output after deleting 4 in delete1()"<<endl;
    for(i=0;i<7;i++)
    {
        cout<<a[i]<<endl;
    }
}
void delete2(){
    int a[5]={1,2,3,4,5};
    int k=4,j=0,i=0;
    int b[4];
    for(i=0;i<5;i++){
        if(a[i]==k){
            continue;
        }
        b[j]=a[i];
        j++;
    }
    cout<<"output after deleting 4 in delete2"<<endl;
    for(i=0;i<4;i++){
        cout<<b[i]<<endl;
    }
}
int main()
{
    delete1();
    delete2();
    return 0;
}

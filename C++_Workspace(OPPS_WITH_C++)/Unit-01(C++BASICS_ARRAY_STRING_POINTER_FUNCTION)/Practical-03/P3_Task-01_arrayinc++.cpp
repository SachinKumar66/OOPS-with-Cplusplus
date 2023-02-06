#include<iostream>
using namespace std;
int main()
{
   int a[]={1,2,6,4,5,5,17,5,16};
   int num=21;
   for(int i=0;i<9;i++)
   {
    for(int j=i+1;j<9;j++)
    {
        if(a[i]+a[j]==num)
        {
            cout<<a[i]<<""<<a[j];
            cout<<endl;
        }
    }
   }
    return 0;
}

#include<iostream>
using namespace std;
namespace std1{
    int x=10;
}
namespace std2{
    int x=12;
}
int main()
{
    cout<<std1::x<<endl;
    cout<<std2::x<<endl;
    return 0;
}
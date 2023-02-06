#include<iostream>
#include<list>
#include<string>
using namespace std;
// list container 
int main(){
    list<int>mylist={3,2,1};
    // does not work in list like this 
    // cout<<mylist[0]; 

    // iterators 
    list<int>::iterator p=mylist.begin();

    while(p!=mylist.end()){
        cout<<*p<<"\n";
        p++;
    }
    // list.size()
    cout<<"\nsize"<<mylist.size()<<endl;

    // list.sort() 
    mylist.sort();
    cout<<"\nlist after sorting:"<<endl;
    for(auto itr=mylist.begin();itr!=mylist.end();itr++){
        cout<<*itr<<"";
    }

    // list.reverse()
    mylist.reverse();
    cout<<"\n\n list after reversing:"<<endl;
    for(auto itr=mylist.begin();itr!=mylist.end();itr++){
        cout<<*itr<<"";
    }
    cout<<endl;

}
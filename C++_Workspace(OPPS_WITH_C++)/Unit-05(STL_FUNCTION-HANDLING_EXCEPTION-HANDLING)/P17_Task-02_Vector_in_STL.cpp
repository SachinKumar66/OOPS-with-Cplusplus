#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> g1;
    for(int i=1;i<=5;i++)
    g1.push_back(i);


    cout<<"output of begin and end:";


    // auto is a dynamicaly type datatype which is resolved in runtime 
    for(auto i=g1.begin();i!=g1.end();++i)
    cout<<*i<<" ";


    cout<<"\n output of rbegin and rend";
    for(auto ir=g1.rbegin();ir!=g1.rend();++ir)
    cout<<*ir<<" ";

    cout<<endl;

    cout<<"size:"<<g1.size()<<endl;
    cout<<"\ncapacity :"<<g1.capacity()<<endl;

    cout<<"/nmax_size"<<g1.max_size()<<endl;
    // give total space of your system ie the memory that can used to make an vector 

    g1.resize(4);
    // print the vector size after resize()

    cout<<"\nsize:"<<g1.size();

    // check if vector is empty or not
    if(g1.empty()==false)
    cout<<"\n vector is not empty"<<endl;

    else
    cout<<"vector is empty"<<endl;
    
}
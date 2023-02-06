/* -maps are associative containers that store element in a map
-each elements has a key and avalue and a mapped value
-no two mapped values can have same key values
begin()-return an iterator to the first element in the map
end()-return an iterator to the theoretical element that follows last element in the map
-size()-returns the number of element in map
-max_size()-return the maximum numbers of elements that the map can hold
-empty()- returns whether the map is empty 
-pair insert(key value, mapvalue)-
add a new element to the map
-erase(iterator position)-removes the element at the position pointed bythe iterator
-clear()-removes all the elements from the map
-find an element
- auto it=map1.find(3)*/
#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main(){
    // empty map container
    map<int,int> map1;


    // insert element in random order: pair
    // insert(keyvalue,mapvalue)
    map1.insert(pair<int,int>(1,40));
    map1.insert(pair<int,int>(2,30));
    map1.insert(pair<int,int>(3,60));
    map1.insert(pair<int,int>(4,50));
    map1.insert(pair<int,int>(5,20));
    map1.insert(pair<int,int>(6,50));
    map1.insert(pair<int,int>(7,10));

    // printing maps 
    map<int,int>::iterator itr;
    for(itr=map1.begin();itr!=map1.end();++itr){
        cout<<'\t'<<itr->first<<'\t'<<itr->second<<'\n';
    }
    cout<<endl;


    // search element in a map 
    auto it =map1.find(3);
    cout<<"iterator points to"<<it->first<<"="<<it->second<<endl;


    // assigning the element from map1 to map2 
    map<int,int>map2(map1.begin(),map1.end());
     
     
    // remove all the elements with key=4 
    int num;
    num=map2.erase(4);
    cout<<num<<"removed\n";
    for(itr=map2.begin();itr!=map2.end();++itr){
        cout<<'\t'<<itr->first<<'\t'<<itr->second<<'\n';
    }
    cout<<endl;

    // siize 
    cout<<map1.size()<<endl;

    // max_size()
    cout<<map1.max_size()<<endl;

    // empty(): checks if the map is empty or not 
    if(map1.empty()==false){
        cout<<"\n map1 is not empty";
    }
    else{
        cout<<"\nmap1 is empty";
    }
    // clear 
    map1.clear();
    cout<<"\nsize:"<<map1.size()<<endl;
    return 0;
}
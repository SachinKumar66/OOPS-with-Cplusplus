//Wap in c++ to read and write from and to a file using ifstream and ofstream
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void write()
{
    ofstream file;
    file.open("sample.txt");
    file<<"my life is good.\n";
    file<<"data is the new currency.\n";
    file<<"The purpose of life is to be happy";
    file.close();
}
void read()
{
    ifstream file;
    string data;
    file.open("sample.txt");
    if(!file){
        cout<<"filenot exist";
    }
    while(getline(file,data))
    {
        cout<<data<<endl;
    }
    file.close();
}
int main()
{
    write();
    read();
}
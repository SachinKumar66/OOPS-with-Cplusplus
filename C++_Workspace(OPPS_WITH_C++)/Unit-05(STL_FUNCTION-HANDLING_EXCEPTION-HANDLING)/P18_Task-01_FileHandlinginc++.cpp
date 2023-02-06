#include <iostream>
#include <fstream>
using namespace std;
/*
- P18_BasicOperationsInC++.cpp
- Basic File operations Part-01
* Opening and Closing a file
* ios::out -> To create a file and write in a file
* ios::in -> To read a file
* ios::app -> To append in a file
*/
void a1()
{
fstream new_file;
new_file.open("new_file_write.txt",ios::out);
if(!new_file)
{
cout<<"File creation failed";
}
else
{
cout<<"New file created";
new_file.close(); // Step 4: Closing file
}
}
/*
- Basic File operations Part-02
* Writing in a file
*/
void a2()
{
fstream new_file;
new_file.open("new_file_Write.txt",ios::out);
if(!new_file)
{
cout<<"File creation failed";
}
else
{
cout<<"New file created";
new_file << "First Line!\n";
new_file.close(); // Step 4: Closing file
}
}
/*
- Basic File operations Part-03
* Append in a file
*/
void a3()
{
int x;
fstream new_file;
new_file.open("new_file_write.txt", ios::app); 
// append instead of overwrite
// Insertion Operator (<<)
new_file << "Data ";
new_file << "Data ";
new_file << "Data ";
new_file << "Data ";
new_file << "Data";
new_file.close();
}
/*
- Basic File operations Part-04
* Reading from a file
*/
void a4()
{
fstream new_file;
new_file.open("new_file_write.txt",ios::in);
if(!new_file)
cout<<"No such file";
else
{
char ch;
while (!new_file.eof())
{
new_file >> noskipws >> ch;
cout << ch;
}
new_file.close();
}
}
//Count words from a file
void a5(){
fstream new_file;
int words = 0;
new_file.open("new_file_write.txt",ios::in);
if(!new_file)
cout<<"No such file";
else
{
char ch;
while (!new_file.eof())
{
new_file >> noskipws >> ch;
if(ch == '\n' | ch == ' '){
words++;
}
}
words++;
cout << words << endl;
new_file.close();
}
}
//Count no of character in a file
void a6(){
fstream new_file;
int characters = 0;
new_file.open("new_file_write.txt",ios::in);
if(!new_file)
cout<<"No such file";
else
{
char ch;
while (!new_file.eof())
{
new_file >> noskipws >> ch;
characters++;
}
characters--;
cout << characters << endl;
new_file.close();
}
}
int main(){
    a1();
    a2();
    a3();
    a4();
    a5();
    a6();
}
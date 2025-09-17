#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    fstream fin("myfilee.txt",ios::in);
    cout<<"\nposition of get pointer: "<<fin.tellg();
    fin.seekg(3);
    cout<<"\nPosition of get pointer: "<<fin.tellg();
    cout<<"\nPosition of put pointer: "<<fin.tellp();
    char ch;
    fin.get(ch);
    cout<<"\ncurrent char: "<<ch;
    fin.get(ch);
    cout<<"\ncurrent char: "<<ch;
    char s[20];
    fin.getline(s,10);
    cout<<endl<<s;
    fin.close();
}
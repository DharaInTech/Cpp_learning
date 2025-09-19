#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    int pos,nchar;
    fstream fin("myfilee.txt",ios::in|ios::out);
    char s[50];
    fin.seekg(0,ios::beg);
    cout<<"\nFull content of file: \n\n";
    while(fin.getline(s,40))
    {
        cout<<s<<endl;
    }
    // fin.seekg(0,ios::beg);
    fin.clear();
    cout<<"\nposition of get pointer: "<<fin.tellg();
    cout<<"Enter position : ";
    cin>>pos;
    cout<<"Enter no of char: ";
    cin>>nchar;
    char ch[20];
    fin.seekg(pos,ios::beg);
    fin.get(ch,nchar+1);
    cout<<ch<<endl;
    
 
    fin.close();
}
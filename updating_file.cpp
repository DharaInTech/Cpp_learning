#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fin("myfilee.txt",ios::in|ios::out);
    int pos,nchar;
    char s[50],uc[50];
    fin.seekg(0,ios::beg);
    cout<<"\nFull content of file: \n\n";
    while(fin.getline(s,40))
    {
        cout<<s<<endl;
    }
    // fin.seekg(0,ios::beg);
    fin.clear();
    cout<<"Enter position : ";
    cin>>pos;
    cout<<"Enter no of char: ";
    cin>>nchar;
    cout<<"Enter chara: ";
    cin>>uc;
    char ch[20];
    fin.seekg(pos,ios::beg);
    fin<<uc;
   // cout<<ch<<endl;
   fin.seekg(0,ios::beg);
    cout<<"\nFull content of file: \n\n";
    while(fin.getline(s,40))
    {
        cout<<s<<endl;
    }
}
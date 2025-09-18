#include <iostream>
#include  <fstream>
#include <cstring>
using namespace std;
int main()
{
    fstream fout("myfilee.txt",ios::app);
    if(!fout.is_open())
    {
        cout<<"\n OOpppps there is some problem while opeing the file";
        return 1;
    }
    char nm[20];
    for(int i=0;i<=5;i++)
    {
        cout<<"Enter your name: ";
        cin>>nm;
        fout<<endl<<nm;
    }
    fout<<"File successfullly writte!!!!!";
}
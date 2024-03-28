#include<iostream>
#include<cstring>
#include<fstream>
#include<math.h>
#include<string.h>
using namespace std;
void deleteWord(string s,string s1)
{
    int h=s.find(s1);
    while(h>=0)
    {
        s=s.erase(h,s1.length());
        h=s.find(s1);
    }
    cout<<s;
}
int main()
{
    string s ="Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1="ai";
    deleteWord(s,s1);
}

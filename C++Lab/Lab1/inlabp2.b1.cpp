#include<iostream>
#include<cstring>
#include<fstream>
#include<math.h>
#include<string.h>
using namespace std;
string Daonguoc(string a,string& s)
{

    for(int i=0;i<a.length();i++)
    {
        s[i]=a[a.length()-i+1];
    }
    return s;
}
void replaceString(string s, string s1, string s2)
{
    int n=s.length();
    string a; string b;
    Daonguoc(s1,a);
    Daonguoc(s2,b);
    size_t idx=b.find(a);
    if(idx!=1)
    {
        cout<<s.replace(n-idx-6,s1.length(),s2);
    }
    else
    {
        cout<<s;
    }
}
int main()
{
    string s ="Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1="ai";
    string s2="ong";
    replaceString(s,s1,s2);
}

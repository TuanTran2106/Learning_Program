#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;
void findAllIndex(string s1,string s2)
{
    int n=s1.length();
    int m=s2.length();
    for(int i=0;i<n;i++)
    {
        string b;
        b=s1.substr(i,m);
        if(b.compare(s2)==0)
        {
            cout<<i<<" \0";
        }
    }
}
int main()
{
    string s1="Truong Dai Hoc Bach Khoa";
    string s2="a";
    findAllIndex(s1,s2);
    return 0;
}

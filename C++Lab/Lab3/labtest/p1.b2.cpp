#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
int check(string s)
{
    int n=s.length();
    int k=n/2-1;
    int flag=1;
    while(k>=0)
    {
        if(s[k]==s[n-1-k])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
        k--;
    }
    if(flag==1)
    {
        return true;
    }
}
int main()
{
    string s="babad";
    int n=s.length();
    string a;
    int max=0;
    for(int i=0;i<n;i++)
    {
        a=s.substr(i,n-i);
        int k=n-i;
        if(k>=max)
        {
            max=k;
        }
        if(check(s)==0&&k==max)
        {
            cout<<s;
        }
    }


}

#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

bool palindrome(string strg)
{
    int n=strg.length();
    int i=n/2-1;
    int count=0;
    while(i>=0)
    {
        if(strg[i]==strg[n-i-1])
        {
            count++;
        }
        else{return false;}
        i--;
    }
    if(count==n/2)
    {
        return true;
    }
}
bool palindromeRecursion(string s)
{
    if(s.empty())
    {
        return true;
    }
    int n=s.length();
    if(s[0]!=s[n-1])
    {
        return false;
    }
    return palindromeRecursion(s.substr(1,s.length()-2));
}
bool palindromeRecursion1(char s[],int n)
{
    if(n<1) return true;
    else if(s[0]!=s[n-1]) return false;
    else return palindromeRecursion1(s+1,n-2);
}
int main()
{
    string s="abcsba";
    char s1[]="abcba";
    int n=strlen(s1);
    cout<<palindrome(s)<<endl;
    cout<<palindromeRecursion(s)<<endl;
    cout<<palindromeRecursion1(s1,n);

    return 0;
}

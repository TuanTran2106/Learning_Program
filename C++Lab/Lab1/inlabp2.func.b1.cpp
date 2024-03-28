#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
using namespace std;

bool isPalindrome(const char* str)
{

    int n=strlen(str);
    char s[n];
    for(int i=0;i<n;i++)
    {
        s[i]=str[i];
    }
    for(int i=0;i<n;i++)
    {
        s[i]=str[n-i-1];
    }


    int j=n;
    int flag=1;
    while (j--) {
      if(s[j] != str[j]) {
         flag = 0;
         break;
      }
   }
   if(flag==1)
   {
       return true;
   }
   else
    return false;
}
int main()
{
    const char* str="abba";
    cout<<isPalindrome(str);
}

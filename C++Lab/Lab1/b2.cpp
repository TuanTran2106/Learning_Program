#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;
void process(const char* str,char* outstr)
{
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
       outstr[i]=str[n-i-1];
    }
    outstr[strlen(str)]='\0';
}
int main()
{
    char str[] ="abc def ghi";
    char *outstr =new char[strlen(str) +1];
    process(str,outstr);
    cout<<outstr;
}

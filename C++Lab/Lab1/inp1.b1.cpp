#include<iostream>
#include<cstring>
#include<fstream>
#include<math.h>

using namespace std;

void printFirstRepeatedWord(char str[])
{
    int n=strlen(str);
    int tu=1;
    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
            tu++;
        }
    }
    char t[10];
    char s[10];
    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
            strncpy(t,str,i);
            for(int j=i;j<n;j++)
        {
        if(str[j]==' ')
        {
            strncpy(s,str+i+1,j-i-1);
        }
        if(strcmp(t,s)==0)
        {
            cout<<s;
        }
        else
        {
            i=j+1;
        }
        }
        }

    }
}
int main()
{
    char str[]="car taxi bike bike car taxi";
    printFirstRepeatedWord(str);
}

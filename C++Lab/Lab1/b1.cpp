#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;
void xoa(char str[],int i)
{
    int n=strlen(str);
    for(int j=i;j<n;j++)
    {
        str[j]=str[j+1];
    }
}
void  process(char str[], char outstr[])
{
    int n=strlen(str);

    for(int i=0;i<n;i++)
    {
        if(str[i]==' '&&str[i+1]==' ')
        {
            xoa(str,i);
            i--;
        }
    }
    if(str[0]==' ')
    {
        xoa(str,0);
    }
    if(str[n-1]==' ')
    {
        xoa(str,n-1);
    }
    for(int i=0;i<strlen(str);i++)
    {
    outstr[i]=str[i];
	}
}
int main()
{
    char str[] ="  abc def ghi  ";
    char *outstr =new char[strlen(str) +1];
    process(str,outstr);
    cout<<outstr;
}

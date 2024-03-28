#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<string.h>
using namespace std;
bool xetchuoi(char n[])
{
    int m=strlen(n);
    int i=1;
    while(n[i]<n[i+1])
    {
        i++;
    }
    int j=i;
    while(n[j]>n[j+1])
    {
        j++;
    }
    if(j==m-3)
    {
        return true;
    }
    else
    {
       return false;
    }
}
int main()
{
    char n[]={1,3,5,7,6,5,4};
    cout<<xetchuoi(n);
    return 0;
}

#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
/*
void addElement(int*& arr,int n,int val,int index)
{
    int* Newarr=new int[n+1];
    if(index>n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
        }
    }
    for(int i=0;i<index;i++)
    {
        Newarr[i]=arr[i];
    }
    for(int i=index+1;i<n+1;i++)
    {
        Newarr[i]=arr[i-1];
    }
    Newarr[index]=val;
    delete[] arr;
    arr=Newarr;
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<' ';
    }
}
int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int val;
    int index;
    cin>>val>>index;
    addElement(arr,n,val,index);
}
*/

/*
int* flatten(int** matrix,int r,int c)
{
    int k=r*c;
    int n=0;
  int*  Newmatrix=new int[k];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            Newmatrix[n]=matrix[i][j];
            n++;
        }
    }
    return Newmatrix;
}
int main()
{
    int r;
    int c;
    cin>>r>>c;
    int** matrix=new int*[r];
    for(int i=0;i<r;i++)
    {
        matrix[i]=new int[c];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<r*c;i++)
    {
    cout<<flatten(matrix,r,c)[i]<<' ';
    }
}
*/

char* concatStr(char* str1,char* str2)
{
    int n1=0;int n2=0;
    while(str1[n1]!='\0')
    {
        n1++;
    }
    while(str2[n2]!='\0')
    {
        n2++;
    }
    int n=n1+n2+1;
    char* s =new char[n];
    for(int i=0;i<n1;i++)
    {
        s[i]=str1[i];
    }
    for(int i=0;i<n2;i++)
    {
        s[n1+i]=str2[i];
    }
    s[n-1]='\0';
    return s;
}
int main()
{
    char s1[]="Hello, ";
    char s2[]="how are you?";
    char* s= concatStr(s1,s2);
    cout<<s;
}

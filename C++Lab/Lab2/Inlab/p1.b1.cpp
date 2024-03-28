#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
/*
bool checkDuplicate(int* ar,int size)
{
    if(size==1||size==0)
    {
        return true;
    }
    for(int i=1;i<size;i++)
    {
        if(ar[0]==ar[i])
        {
            return false;
        }
    }
    return checkDuplicate(ar+1,size-1);
}
int main()
{
    int size;
    cin>>size;
    int* ar;
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    cout<<checkDuplicate(ar,size);
}
*/

int recursiveSearch(int&n,int m, int arr[],int index)
{
if(n==0||index>=n)
    {
        return -1;
    }
 if(index<n&&arr[index]==m)
 {
     for(int i=index;i<n-1;i++)
     {
         arr[i]=arr[i+1];
     }
     n--;
     return index;
 }
 for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<' ';
 }
        return recursiveSearch(n,m,arr,index);
}
int main()
{
    int n;
    int m;
    cin>>n>>m;
    int index;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<recursiveSearch(n,m,arr,index);
}

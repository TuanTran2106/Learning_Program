#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
/*
int calcSum(int* ptr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=*(ptr+i);
    }
    return sum;
}

int main()
{
    int arr[]={1,2,3,4,5};
    cout<<calcSum(arr,sizeof(arr)/sizeof(arr[0]));
}
*/
void add(int* arr,int n,int k)
{
    *(arr+n)=k;
}
int main()
{
    int arr[100]={1,2,3,4,5};
    int n=5;
    int k=7;
    add(arr,n,k);
    cout<<arr[n];
}

#include<iostream>
#include<cstring>
#include<fstream>
#include<math.h>
#include<string.h>
using namespace std;
/*
int ascendingRows(int arr[][1000],int row,int col)
{
    int count =0;

    for(int i=0;i<row;i++)
    {
        int kt=0;
        for(int j=0;j<col-1;j++)
        {
            if(arr[i][j]<=arr[i][j+1])
            {
                kt++;
            }
        }
        if(kt==col-1)
        {
            count++;
        }
    }
    return count;
}
*/
bool checkSNT(int a)
{
        int t=0;
    if(a<=0)
    {
        return false;
    }
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
          return false;
        }
    }
    return false;
}
int primeColumns(int arr[][1000],int row,int col)
{
    int sum=0;
    int count=0;
    for(int i=0;i<col;i++)
    {
        sum=0;
        for(int j=0;j<row;j++)
        {
            sum+=arr[i][j];
        }
        if(checkSNT(sum)==true)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    /*
    int arr[][1000]={{32,4,9},{-80,37,71},{-91,-79,-51}};
    cout<<ascendingRows(arr,3,3);
    */
    int arr[][1000]={{34,-15,11,-70,-23,24},{-39,-90,63,-45,-52,48},{-42,92,55,92,82,81}};
    cout<<primeColumns(arr,3,6);
}

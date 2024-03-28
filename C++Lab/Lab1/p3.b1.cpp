#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;
int findMaxColumn(int arr[][1000],int row,int col)
{
    int max=0;
    int sum=0;
    int sum1=0;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            sum+=arr[i][j];
        }
        if(sum>=max)
        {
            max=sum;
        }
    }
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            sum1+=arr[i][j];
        }
        if(sum1==max)
        {
            return i;
        }
    }
}

int main()
{
    int arr[][1000]={{-44,64,-6},{87,92,-17},{-92,53,-38},{-39,-92,21}};
    cout<<findMaxColumn(arr,4,3);
}

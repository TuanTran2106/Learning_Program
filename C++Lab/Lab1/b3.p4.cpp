#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;
int diagonalDiff(int arr[][1000],int row,int col,int x,int y)
{
    int sum1=0;
    int sum2=0;
    int kq=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i+j==x+y-2)
            {
             sum1+=arr[i][j];
            }
        }
    }
    sum1-=arr[x-1][y-1];
    if(x>=y)
    {
        for(int i=1;i<=y;i++)
        {
            sum2+=arr[x-i+1][y-i+1];
        }
        for(int j=1;j<row-x;j++)
        {
            sum2+=arr[x+j-1][y+j-1];
        }
    }
    if(x<y)
    {
        for(int i=1;i<=x;i++)
        {
            sum2+=arr[x-i+1][y-i+1];
        }
        for(int j=1;j<col-y;j++)
        {
            sum2+=arr[x+j+1][y+j+1];
        }
    }

    kq=sqrt(sum1-sum2);
    return kq;

}
int main()
{
    int arr[][1000]={{55,85,47,58},{31,4,60,67},{94,69,71,73},{51,62,64,90}};
    cout<<diagonalDiff(arr,4,4,1,2);
}

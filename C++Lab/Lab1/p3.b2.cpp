#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;
int diagonalProduct(int arr[][1000],int row, int col)
{
    int tich=1;
    if(row!=col)
    {
        return 0;
    }
    else
    {
    for(int i=0;i<row;i++)
    {
            tich*=arr[i][i];
    }
    return tich;
    }
}

int main()
{
    int arr[][1000]={{-45,18,-37},{-2,-31,24},{-48,-33,-48}};
    cout<<diagonalProduct(arr,3,3);
}

#include <iostream>
#define MAX 100
using namespace std;

void Swap(int &a,int &b)
{
    int temp =a;
    a=b;
    b=temp;
}
void QuickSort(int a[],int left,int right)
{
    int pivot =a[(left+right)/2];
    int l =left;
    int r =right;

    do
    {
        while(a[l]<pivot)
        {
            l++;
        }
        while(a[r]>pivot)
        {
            r--;
        }

        if(l<=r)
        {
            Swap(a[l],a[r]);
            l++;
            r--;
        }
    }
    while(l<=r);

        if(left<r)
    {
        QuickSort(a,left,r);
    }
        if(l < right)
    {
        QuickSort(a,l,right);
    }
}
int main()
{
  int a[] = {30,40,2,5,4,9,7,0,-10,-20};
  int n= sizeof(a) /sizeof(a[0]);
  QuickSort(a,0,n-1);
  for(int j=0;j<n;j++)
    {
    cout<<a[j]<<"       ";
    }
    return 0;
}

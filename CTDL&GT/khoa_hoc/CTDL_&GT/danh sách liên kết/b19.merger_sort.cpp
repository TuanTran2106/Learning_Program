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

int* MergeSort(int *a,int n1,int *b,int n2)
{
    int *c =new int[n1+n2];
    int i=0;
    int j=0;
int dem=0;
    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        {
            c[dem++]=a[i++];
        }else
        {
          c[dem++]=b[j++];
        }
    }
        for(int k=i;k<n1;k++)
        {
            c[dem++]=a[k];
        }
        for(int k=j;k<n2;k++)
        {
            c[dem++]=b[k];
        }

    return c;
}

int* MergerSort1(int a[],int n)
{
     if(n==1)
    {
        return a;
    }
    int mid =n/2;
    int *m1 = new int[mid];
    int *m2 = new int[n -mid];

    for(int i=0;i<mid;i++)
    {
        m1[i]=a[i];
    }
    for(int i=0;i<n-mid;i++)
    {
        m2[i]=a[mid+i];
    }

    m1= MergerSort1(m1,mid);
    m2 =MergerSort1(m2,n-mid);

    return MergeSort(m1,mid,m2,n-mid);
}
int main()
{
  int a[] = {30,40,2,5,4,9,7,0,-10,-20};
 // int a[]= {2,5,6,7};
 // int b[]={7 ,8, 9 };
 // int *c=MergeSort(a,4,b,3);
 int *b =MergerSort1(a,10);
  for(int j=0;j<10;j++)
    {
    cout<<b[j]<<"       ";
    }
  //int n= sizeof(a) /sizeof(a[0]);
  //QuickSort(a,0,n-1);
//  for(int j=0;j<n;j++)
    //{
   // }
    return 0;
}

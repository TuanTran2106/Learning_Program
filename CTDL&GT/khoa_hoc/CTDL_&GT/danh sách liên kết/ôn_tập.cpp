#include <iostream>
#define MAX 100
using namespace std;
//ÔN TẠP
//Tìm kiếm InterchangeSort


void Swap(int &a,int &b)
{
    int temp =a;
    a=b;
    b=temp;
}
void Search(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
              {
                Swap(a[i],a[j]);
              }
        }
    }
}
//Tìm kiếm BubleSort
void BubbleSort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[i]>a[j])
            {
                Swap(a[i],a[j]);
            }
        }
    }
}

//Tìm kiêm tuyến tính

int Finding(int a[],int n,int x)
{
    int vt =0;
    while(a[vt]!=x&&vt<n)
    {
        vt++;
    }
    if(vt==n)
    {
        return -1;
    }else
    {
       return vt;
    }
}

int Finding1(int a[],int n,int x)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }

    }
    return -1;
}

int Binary(int a[],int n,int x)
{
    int l=0;
    int r=n-1;
   while (l<=r)
   {
       int m = (l+r)/2;
       if(a[m]==x)
       {
           return m;
       }else if(a[m]>x)
       {
           r=m-1;
       }else
       {
           l=m+1;
       }

   }
   return -1;
}

void SelectionSort(int a[],int n)
{
    for(int k=0;k<n;k++)
    {
    int min_pos =k;

    for(int i =k+1;i<n;i++)
    {
        if(a[i]<a[min_pos])
        {
            min_pos=i;
        }
    }

    Swap(a[min_pos],a[k]);
    }
}

void InsertionSort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int x =i;
        int pos =i-1;

        while(a[i]!=x&&pos>0)
        {
            if(a[i]<a[pos])
            {
                Swap(a[i],a[pos]);
            }
                pos--;
        }
    }
}

void QuickSort(int a[],int left,int right)
{
   int pivot =a[(left+right)/2];
   int l=left;int r=right;
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
    if(l<right)
    {
        QuickSort(a,l,right);
    }

}
int main()
{
   int a[] = {3, 2,6,5,4,9,8,-1,-10,10};
   int n = sizeof(a)/sizeof(a[0]);
  // Search(a,n);
  /* BubbleSort(a,n);
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<"     ";
   }
  int gt = Finding1(a,n,8);

  int gt1 =Binary(a,n,8);
  cout<<gt1;
  */
  SelectionSort(a,n);
  for(int i=0;i<n;i++)
   {
       cout<<a[i]<<"     ";
   }
cout<<endl;
   InsertionSort(a,n);
  for(int i=0;i<n;i++)
   {
       cout<<a[i]<<"     ";
   }
   QuickSort(a,0,9);
    for(int i=0;i<n;i++)
   {
       cout<<a[i]<<"     ";
   }
    return 0;
}

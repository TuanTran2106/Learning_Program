#include <iostream>
#define MAX 100
using namespace std;


int linearS(int a[], int n,int x)
{
 /*   int vt =0;
    while(vt<n&&a[vt]!=x)
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
    */

    for (int i=0;i<n;i++)
    {

        if(a[i]==x)
        {
            return i;
        }

    }
    return -1;
}

int binaryS(int a[], int n, int x)
{
    int l =0;
    int r =n-1;

    while(l<=r)
    {
        int m =(l+r)/2;
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

void Swap(int &a,int &b)
{
    int t =a;
    a=b;
    b=t;
}

void SelectionSort(int a[], int n)
{
    for(int j=0;j<n-1;j++)
    {
     int min =j;
    for(int i=j+1; i<n;i++)
    {
        if(a[i]<a[min])
        {
            min =i;
        }

    }
Swap(a[min],a[j]);
    }
}

void InsertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int x =a[i];
        int pos = i -1;

        while( pos>=0 &&a[pos]>x)
        {
            a[pos +1] = a[pos];
            pos--;
        }
        a[pos+1]=x;
    }
}

void BinaryInsertionSort(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        int l = 0;
    int r = n-1;
    int m = (l+r)/2;

    for(int j=l;j<=m;j++)
    {
        int x =a[j];
        int w = j-1;
        while(w>=0&&a[w]>x)
        {
            a[w+1]=a[w];
            w--;
        }
     a[w+1]=x;
    }
    for(int k=m+1;k<=r;k++)
    {
       int y =a[k];
        int w = k-1;
        while(w>=0&&a[w]>y)
        {
            a[w+1]=a[w];
            w--;
        }
        a[w+1]=y;
    }

   /* for(int j=l;j<=m;j++)
    {
        for(int k=m+1;k<=r;k++)
        {
            if(a[j]>a[k])
            {
                int tem = j;
                i=k;
                k=tem;
                k++;
            }else
            {
                j++;
            }
        }
    }
    */
    }

}
void InterchangeSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
{
        for(int j=i+1;j<n;j++)
 {
            if(a[i]>a[j])
           {
                Swap(a[i],a[j]);
           }
           }
           }
}

void BubleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j<i;j--)
        {
            if(a[j]<a[j-1])
            {
                Swap(a[j],a[j-1]);
            }
        }
    }
}
int main()
{
    int a[] = { 6, 2, 1,3,-1,-5, 9, 7, 5,20,-10};
    int n= sizeof(a) /sizeof(a[0]);
    int vt = binaryS(a,n,4);
    cout<<vt<<endl;

    int vt1 = binaryS(a,n,8);
    cout<<vt1<<endl;

    int vt2 = binaryS(a,n,5);
    cout<<vt2<<endl;

    int vt3 = binaryS(a,n,10);
    cout<<vt3<<endl;

   /* SelectionSort(a,n);
    for(int j=0;j<n;j++)
    {
    cout<<a[j]<<"       ";
    }
    cout<<endl;

 */
 /* InsertionSort(a,n);
    for(int j=0;j<n;j++)
    {
    cout<<a[j]<<"       ";
    }
cout<<endl;
*/
/*
   BinaryInsertionSort(a,n);
    for(int j=0;j<n;j++)
    {
    cout<<a[j]<<"       ";
    }
    */
 InterchangeSort(a,n);
for(int j=0;j<n;j++)
    {
    cout<<a[j]<<"       ";
    }

   BubleSort(a,n);
for(int j=0;j<n;j++)
    {
    cout<<a[j]<<"       ";
    }
}

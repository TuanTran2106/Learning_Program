#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
using namespace std;
bool checkElementsUniqueness(int* arr,int n)
{ int count =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
    }
    if(count==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<checkElementsUniqueness(arr,n);
    delete[] arr;
}

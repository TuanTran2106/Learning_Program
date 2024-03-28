#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

bool isSymmetry(int* head,int* tail)
{
    while(head!=tail)
    {
        if(*head!=*tail)
        {
            return false;
        }
        else
        {
         head++;
         tail--;
        }
    }
    if(head==tail)
    {
        return true;
    }
}
int main()
{
    int arr[]={1,2,2,3,1};
    cout<<isSymmetry(arr,arr+(sizeof(arr)/sizeof(arr[0]))-1);
}

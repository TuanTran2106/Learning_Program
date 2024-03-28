#include<iostream>
#include<cstring>
#include<fstream>
#include<math.h>

using namespace std;
/*
void sum2(int* array,int numElt,int& result)
{
    for(int i=0;i<numElt;i++)
    {
        result+=array[i];
    }
    cout<<result;
}
int main()
{
    int array[] ={-11,111,-1111,-112,-101,11,-19,1,145,12};
    int result=0;
    sum2(array,10,result);
}
*/
bool check(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        return true;
    }
    return false;
}
int main()
{

    int n;
    cin>>n;
    cout<<check(n);
}

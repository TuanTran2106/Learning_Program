#include<iostream>
#include<cstring>
#include<fstream>
#include<math.h>

using namespace std;
int findMax(int* vals,int numEls)
{
    int max=0;
    for(int i=0;i<numEls;i++)
    {
        if(vals[i]>=max)
        {
            max=vals[i];
        }
    }
    return max;
}
int main()
{
    int vals[] ={-11,111,-1111,-112,-101,11,-19,1,145,12};

    int t=findMax(vals,10);
    cout<<t;
}

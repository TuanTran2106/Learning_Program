#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
struct SCP
{
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string* addendums;
    int numAddendums;
};
SCP** sortDatabase(SCP** arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]->id>arr[j]->id)
            {
                swap(arr[i]->id,arr[j]->id);
            }
        }
    }
    return arr;
}
int main()
{
    int n=3;
    SCP** data=new SCP*[n];
    data[0]=new SCP{2,1,"A","B",nullptr,28};
    data[1]=new SCP{55,2,"A","B",nullptr,28};
    data[2]=new SCP{48,1,"A","B",nullptr,28};
data=sortDatabase(data,n);

    for(int i=0;i<n;i++)
    {
        cout<<data[i]->id<<" ";
    }
    for (int i = 0; i < n; i++) {
    delete [] data[i]->addendums;
    delete data[i];
}
delete [] data;
}

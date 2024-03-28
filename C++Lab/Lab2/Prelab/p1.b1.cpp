#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
/*
int gcdRecursion(int p,int q)
{
    if(p==q)
    {
        return p;
    }
    else if(p>q)
    {
        return gcdRecursion(p-q,q);
    }
    else if(p<q)
    {
        return gcdRecursion(p,q-p);
    }
}
int gcdIteration(int p,int q)
{ int i=p+1;
    while(--i)
    {
        if(p%i==0&&q%i==0)
        {

            break;
        }
    }
    return i;
}

int main()
{
    int p;
    int q;
    cin>>p>>q;
    cout<<gcdRecursion(p,q)<<" "<<gcdIteration(p,q);
    return 0;
}
*/


/*
int strLen(char* str)
{
    if(*(str+0)==0)
    {
        return 0;
    }
    return strLen(str+1)+1;
}
int main()
{
    char* str="Truong DH Bach Khoa";
    cout<<strLen(str);
}
*/

void printPatter(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        printPatter(n-5);
    }
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    printPatter(n);
}

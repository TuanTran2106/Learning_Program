#include<iostream>
#include<cstring>
#include<fstream>
#include<math.h>

using namespace std;
int giaithua(int N)
{
    int result=1;
        if(N==0)
        {
            result=1;
        }
        else
        {
        result=N*giaithua(N-1);
        }
        return result;
}
int main()
{
    int N;
    cin>>N;
    int t;
    t= giaithua(N);
    cout<<t<<endl;
    return 0;
}

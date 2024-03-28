#include<iostream>
#include<cstring>
#include<fstream>
#include<math.h>

using namespace std;

void calSum(string filestring)
{
    ifstream file(filestring);
    int sum=0;
    string s;
    while(file>>s)
    {
        sum+=stol(s);
    }
    cout<<sum;
}
int main()
{
    string filestring;
    calSum(filestring);

}

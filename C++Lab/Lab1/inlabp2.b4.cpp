#include<iostream>
#include<cstring>
#include<fstream>
#include<math.h>
#include<string.h>
using namespace std;

void uppercase(string output)
{
    string s="heLlo10";
    ifstream t;
    t.open("input.txt");
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        t>>s[i];
    }
    t.close();
    ofstream k(output);
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        output[i]=s[i];
        k<<output[i];
    }
    k.close();
    for(int i=0;i<n;i++)
    {
       cout<<output[i];
    }


}
int main()
{
    string s;
    uppercase(s);
}

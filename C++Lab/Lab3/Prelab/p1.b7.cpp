#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
void Tim(string s1)
{
    int i=0;
    int min=s1.length();
    while(s1[i]!=' ')
    {
        i++;
    }
    string b=s1.substr(0,i);
    int j=i+1;
    while(j<s1.length())
    {
        string c=s1.substr(j,i);
        if(c.compare(b)==0)
        {
            if(j<=min)
            {
                min=j;
            }
            break;
        }
        j++;
    }
         Tim(s1.substr(i+1,s1.length()-i-1));
}
int main()
{
    string s1 ="car bike xe bike car xe";
    Tim(s1);
}

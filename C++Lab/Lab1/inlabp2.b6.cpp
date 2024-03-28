#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
using namespace std;

void process(string fileName)
{
    ifstream t(fileName);
    if(t.is_open())
    {
        string s;
        int n;int m;
        t>>n;t>>m;
        float Max;
        for(int i=0;i<n;i++)
        {
            float Maxrow;
            t>>Maxrow;
            for(int j=1;j<m;j++)
            {
                float index;
                t>>index;
                if(index>=Maxrow)
                {
                    Maxrow=index;
                }
            }
            cout<<Maxrow<<endl;
            if(Maxrow>=Max)
        {
            Max=Maxrow;
        }
        }

        cout<<Max;
    }
}
int main()
{
    string fileName;
    fileName="input.txt.txt";
    process(fileName);
}

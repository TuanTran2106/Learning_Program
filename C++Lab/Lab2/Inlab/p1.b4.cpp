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

string convertToString(SCP obj)
{
    string s;
    string a;
    string b;
    if(obj.id<100)
    {
        if(to_string(obj.id).length()==1)
        {
            a="00"+to_string(obj.id);
        }
        else if(to_string(obj.id).length()==2)
        {
            a="0"+to_string(obj.id);
        }
    }
    if(obj.objClass==0)
    {
        b="Safe";
    }
    else if(obj.objClass==1)
    {
        b="Euclid";
    }
    else if(obj.objClass==2)
    {
        b="Keter";
    }
    s="Item #: SCP-"+a+'\n'
    +"Object Class: "+b+'\n'
    +"Description: "+obj.speConProcedures+'\n'
    +"Description: "+obj.description+'\n'
    +obj.addendums[0]+'\n'
    +obj.addendums[1];
    return s;
}

int main()
{
    string* addendums=new string[2];
    addendums[0]="Document #055-1";
    addendums[1]="Document #055-2";
    SCP obj{55,2,"OBJECT","ALL",addendums,30};
    cout<<convertToString(obj);
    delete[] addendums;
}

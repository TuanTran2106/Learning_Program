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

void addAddendum(SCP &obj,string addendum)
{
    string* newaddendums =new string[2];
    newaddendums[0]=obj.addendums[0];
    newaddendums[1]= addendum;
    delete[] obj.addendums;
    obj.addendums=newaddendums;
}
int main()
{
    string* addendums =new string[1];
    addendums[0]="Document #055-1";
    SCP obj{55,2,"Object is kept","All about",addendums,28};
    addAddendum(obj,"Document #055-2");
    cout<<obj.addendums[1];
    delete[] obj.addendums;
}

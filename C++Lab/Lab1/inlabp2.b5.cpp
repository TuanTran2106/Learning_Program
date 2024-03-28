#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
using namespace std;

void threeChars(string fileName)
{
 ifstream t(fileName);
 if(t.is_open())
 {
     string s;
     t>>s;
     while(s!="***")
     {
         if(s[0]<=s[1]&&s[1]<=s[2])
         {
             cout<<"true\n";
         }
         else
         {
             cout<<"false\n";
         }
         t>>s;
     }

     t.close();
 }
}
int main()
{
    string fileName;
    fileName="input.txt.txt";
    threeChars(fileName);
}

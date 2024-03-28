#include<iostream>
#include <stdio.h>
//Hàm friend với 2 lớp , tìm giá trị nhỏ nhất thuộc lớp nào
using namespace std;


int main() {
  /*int n =6;
  int a[10]={2,4,6,7,3,9} ;
  int x=8;

  int sentinel =n;
  a[sentinel] = x;
int i=0;
do
{
    i++;
}while(a[i] != x);
cout<<i;
if(i!=sentinel)
{
    cout<<"Tim thay"<<x<<endl;
}else
{
    cout<<"Khong tim thay"<<x<<endl;
}
  return 0;
*/

//hàm continue thực hiện rẽ nhánh không điều kiện
/*
int i;
int sum=0;
for( i =1;i<=10;i++)
{
    if(i%2==0)
        continue;
        {
        sum =sum+i;
    }
}
cout<<sum;
*/



/*
int n=7;
int m=23;
int a;

bool Timthay =false;
int i=n;
while ((i<=m)&&(!Timthay))
{
    if(i%5==0)
    {
        a=i;
        Timthay =true;
    }
    else{
        i++;
    }
}
cout<<a;
*/

/*int n=4;
int a[4][4] ={{1,3,2,7},{4,6,8,9},{5,3,4,2},{3,2,5,8}};
int i,j;

bool Timthay=false;

for(i=0;i<=n;i++)
{
    for (j=0;j<=n;j++)
    {
        if(a[i][j]==1)
        {
            Timthay =true;
            break;
        }
    }
      if(Timthay)
      {
           break;
      }
    }
if(Timthay)
    {
        cout<<"Tim thay phan tu thu :"<<i<<","<<j<<endl;
    }
    else{
        cout<<"Khong tim thay gia tri"<<endl;
    }

return 0;
*/


//Không sử dụng break, dùng vòng lá cờ while

int n=4;
int a[4][4] ={{1,3,2,7},{4,6,8,9},{5,3,4,2},{3,2,5,8}};
int i,j;

bool Timthay=false;
{


int i=0;

while ((i<=n)&&(!Timthay))
{
   int j=0;
    while((j<=n)&&(!Timthay))
    {
        if(a[i][j]==5)
        {
            Timthay = true;
        }
        else{
            j++;
        }
    }
    if(! Timthay)
    {
        i++;
    }
}

if(Timthay)
{
    cout<<"Tim thay gia tri la:"<<i<<","<<j<<endl;
}
else{
    cout<<"Khong tim thay"<<endl;
}
}
return 0;
}





#include<iostream>
#include <stdio.h>
//Hàm friend với 2 lớp , tìm giá trị nhỏ nhất thuộc lớp nào
using namespace std;
  const int M=6;
  const int N=5;
 void Display(int a[M][N])
 {
     for(int i=0;i<M;i++)
     {
         for(int j=0;j<N;j++)
         {
             cout<<a[i][j]<<"   ";
             cout<<endl;
         }
     }
 }

 //hàm trả về true nếu hàng i và hàng k giống nhau

 bool GiongHang(int a[M][N], int i, int k)
 {
     bool giong =true;
     int j=0;
     while ((j<N)&& giong)
     {
         if(a[i][j]!=a[k][j])
         {
             giong =false;
         }else
         {
             j++;
         }
     }
     return giong;
 }

int main() {

int a[M][N] ={{1,3,7,2,6},{0,9,5,4,1},{7,8,0,5,4},{1,3,7,2,6},
{7,8,0,5,4},{7,8,0,5,4}};
Display(a);

int sonhom=0;

//mảng b đánh dấu hàng chưa thuộc nhóm
bool b[M];
for(int i=0;i<M;i++)
{
    b[i] =false;
}

//xét các hàng của ma trận a

for(int i=0;i<M;i++)
{
    if(!b[i])
    {
        for(int k=i+1;k<M;k++)
        {
            if(! b[k])
            {
               bool giong = GiongHang(a,i,k);
               if(giong)
               {
                   b[i]=  true;
                   b[k]= true;
               }
            }
        }
    }
    if(b[i])
    {
        sonhom ++;
    }
}
cout<<"So nhom la:"<<sonhom<<endl;
    return 0;
}








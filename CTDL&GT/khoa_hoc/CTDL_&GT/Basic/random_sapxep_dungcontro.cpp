#include <iostream>
#include <cstdio>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <malloc.h>
#include <time.h>
// iostream : in out
/*
Viết hàm nhập vào một mảng , hàm xuất mảng đó ra
xuất những số nguyên tố trong mảng đó ra màn hình
*/
using namespace std;



int main()
{
    int n;
    cout<<"nhap n: "<<endl;
    cin>>n;

    int *p;
    p = new int[n];
    //for(int i=0;i<n;i++)
    srand((unsigned)time(NULL));
    for(int i=0;i<n;i++)
    {
       *(p+i) = rand()%99 + 1;
    }
    /*{

        cout<<"Nhap phan tu thu:"<<i<<endl;
        cin>>*(p+i);
    }*/
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
                swap (*(p+i),*(p+j));
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<*(p+i)<<"\t";
    }
    return 0;



  //int a=4;
  //int *p;// *p coi như là biến của con trỏ
  // p =5 : không được vì p là con trỏ không bằng giá trị
  //cấp phát bộ nhớ cho p
  //p =new int;
  //giá trị ô biến p trỏ đến = 5
    //*p= 5;
    //giải phóng bộ nhớ cho p
    //delete p;

  //p = (int*)malloc(sizeof(int));
 // free(p);

  //cout<<a<<endl;
  //cout<<*p;
/*int sum=0;
  int i=1;
  repeat:
      sum = sum +i;
      i++;
    if (i<=5)
        goto repeat;
        cout<<"Tong"<<endl;
  cout<<sum;
*/
}





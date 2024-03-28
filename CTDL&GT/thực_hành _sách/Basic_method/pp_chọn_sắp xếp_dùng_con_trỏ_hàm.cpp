#include<iostream>
#include <stdio.h>
//Sử dụng con trỏ hàm :
//Cấu trúc:
//2 hàm : hàm bool với hàm void
//bool Ascending()/Descending()
//void Selection(..., bool(*func)(...))

//Xuất hàm:
//Selection(...,Ascending/Descending)

using namespace std;
//Sắp thứ tự bằng phương pháp chọn:
//Bài toán :
//Tìm akmin có giá trị nhỏ nhất trong dãy
//Hoán đổi a[i] với a[kmin]

//Các bước giải thuật:
//B1:Biến i=0;
//B2:Cho minVal = a[i], kmin  =i và j=i+1
//B3:Nếu aj < minVal thì ạj= minVal và kmin=j.Cho j++ . Nếu j<n thì lặp lại b3
//B4:Hoán đổi a[i] với a[kmin].Cho i++ Nếu i<n-1 thì chyển đến bước 2 .Ngược lại kết thúc giải thuật


//1.Hàm hoán đổi nội dung 2 con trỏ px và py.
void Swap(int* const px,int* const py)
{
    int temp ;
    temp = *px;
    *px=*py;
    *py=temp;
}
//2.Sắp xếp thứ tự tăng dần của mảng con trỏ pa trỏ đến
//bằng phương pháp Selection Sort

void Selection(int pa[] ,const int n, bool (*func)(int x, int y))
{
    for(int i=0;i<n-1;i++)
    {
        int minVal =pa[i];
        int kmin =i;
        for(int j=i+1;j<n;j++)
            {
            if(!(*func)(minVal,pa[j]))
            {
                minVal=pa[j];
                kmin=j;
            }
            }

           Swap(&pa[i],&pa[kmin]);
    }
}
bool Ascending(int x, int y)
{
    return x<y;
}
bool Descending(int x, int y)
{
    return x>y;
}
void Display(const int a[],const int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"    "<<endl;
    }

}
int main() {
  const int n=9;

  int a[n]={1,4,3,5,7,9,8,2,6};
Display(a,n);
Selection(a,n,Descending);
cout<<"Mang sau khi sap xep"<<endl;
Display(a,n);

    return 0;
}



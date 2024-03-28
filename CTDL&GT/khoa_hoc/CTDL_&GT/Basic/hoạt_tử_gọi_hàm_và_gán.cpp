#include<iostream>
#include <stdio.h>

//Hoạt tải toán tử tăng giảm
//++ , --

using namespace std;



int main() {

HocLuc a(8,4);
HocLuc b(7,5);
HocLuc c(8,6);

if(a<b)
{
    cout<<"a<b"<<endl;
}else{
cout<<"a>=b"<<endl;
}
if(a<c)
{
    cout<<"a<c"<<endl;
}else{
cout<<"a>=c"<<endl;
}
    return 0;
}

//hoạt tải toán tử gọi hàm
/Vd:
    Sophuc operator () (double x)
    {
        Sophuc kq(Phanthuc +x ,PhanAo+x);
        return kq;
    }

hoạt tải toán tử gán
vd:
    Sophuc operator = (const SoPhuc& b)
    {
        Phanthuc =b.Phanthuc;
        PhanAo =b.PhanAo;
    }


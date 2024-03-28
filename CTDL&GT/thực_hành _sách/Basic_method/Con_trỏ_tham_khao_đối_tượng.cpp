#include<iostream>
#include <stdio.h>
/*7.8.Con trỏ tham khảo đối tượng
Cấu trúc:
    class_name* pointer_name ;
    pointer_name = new class_name(list_of_parameter)

    Các đối tượng tham khảo đến :
        *p : đối tượng d được con trỏ p trỏ đến.
        &p : Địa chỉ của con trỏ p tham khảo đến đối tượng d.
        p->A (*p).A : Thuộc tính A của đối tượng d được con trỏ p tham khảo đến.
        p[i] : đối tượng thứ i+1 của một mảng được con trỏ p trỏ đến.

 Vd:Các kiểu tham khảo
 */
using namespace std;
class NgayThang
{
 public:
     void Display();
    NgayThang(int dd, int mm, int yy);
    int Ngay, Thang, Nam;
};

void NgayThang::Display()
{
    cout<<"Ngay :"<<Ngay<<"Thang: "<<Thang<<"Nam: "<<Nam<<endl;
}

NgayThang::NgayThang(int dd, int mm, int yy)
{
    Ngay = dd;
    Thang = mm;
    Nam =yy;
}

int main() {
 NgayThang ngth(8,8,2222);

 //con trỏ p trỏ đến 1 đối tượng thuộc lớp NgayThang

 NgayThang* p = new NgayThang(28,8,1999);

     //Xuất ra giá trị:
     cout<<"Ngay: "<<(*p).Ngay<<endl;
     cout<<"Thang :"<<p ->Thang<<endl;
     cout<<"Nam :"<<p[0].Nam<<endl;

     *p =ngth;
     p ->Display();
    return 0;
}

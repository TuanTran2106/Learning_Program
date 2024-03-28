#include<iostream>
#include <stdio.h>
#include<string>

using namespace std;
struct HocVien
{
    int MaHV;
    string TenHV;
    int Namsinh;
};
struct NodeHV
{
    HocVien hv;
    NodeHV *next;
};

void init(NodeHV *&head)
{
    head=NULL;
}
NodeHV* CreateNode(HocVien x)
{
    NodeHV *p=new NodeHV;
    p->hv =x;
    p->next =NULL;

    return p;
}
//Kết thúc B1,2.
//Bài 3,4:Thêm đầu, thêm cuối,thêm mặc định
void addFirst(NodeHV* &head,HocVien x)
{
    NodeHV *p=CreateNode(x);
    p->next = head;
    head =p;
}
 void Xuat(HocVien hv)
 {
     cout<<"Ma Hoc Vien : "<<hv.MaHV<<endl;
     cout<<"Ten Hoc Vien : "<<hv.TenHV<<endl;
     cout<<"Nam sinh : "<<hv.Namsinh<<endl;
     cout<<"============"<<endl;
 }

void Output(NodeHV* &head)
{
    NodeHV* p =head;
    while(p !=NULL)
    {
        Xuat(p->hv);
        p=p->next;
    }
}
//KT BÀI 3,4.
// Bài 5.Xóa đầu, xóa cuối, xóa chỉ định

//KT BÀI 5.
int main() {
    HocVien h1;
    h1.MaHV = 1;
    h1.TenHV ="tRAN b";
    h1.Namsinh = 2003;

    HocVien h2;
    h2.MaHV = 2;
    h2.TenHV = "Tran C";
    h2.Namsinh = 2001;
   NodeHV* head;
   init(head);
  addFirst(head,h1);
  addFirst(head,h2);

  Output(head);
    return 0;
}


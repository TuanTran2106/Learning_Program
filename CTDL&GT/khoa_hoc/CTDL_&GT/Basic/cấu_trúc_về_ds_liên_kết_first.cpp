#include<iostream>
#include <stdio.h>

//Danh sách liên kết gồm:
//first header, header vòng
//Mỗi phần tử cúa danh sách liên két gồm 2 vùng chính
//Info:chứa nội dung của phần tử
//Link:chứa con trỏ tham khảo đến danh sách liên kết
//Khai báo cấu trúc của 1 phần tử chứa số nguyên nhưu sau:
//typedef struct Item* ptr;
//Phần tử của DSLK
//struct Item {
//int Info;
//int Link;
//};

/*
a.Khởi tạo danh sách rỗng
void KhoiDong(ptr& first)
{
    first=NULL;
}

b.Kiểm tra danh sách rỗng:
    bool IsEmpty(ptr first)
    {
        bool kq =first ==NULL;
        return kq;
    }

 a.Thêm 1 phần tử vào danh sách

 void InsertFirst(ptr& first,int x)
 {
//Tạo phần tử mới q
ptr q = new Item;
q-> Info =x;
q->Link=first;
first=q;
 }

 b.Thêm 1 phần tử x vào danh sách có thứu tựu tăng dần

 void InsertValue(ptr& first ,int n)
 ptr tp;
 ptr p =first;
 bool  cont =true;
 while((p != NULL)&&cont)
 {
     if(p->Info <x)
     {
         tp =p;
         p =p->Link;
     }else
     cont =false;
 }

 //tạo phần tử mới q để thêm vào danh sách

 ptr q = new Item;
 q->Info =x;
 if(q==first)
 {
     q->Link =first;
     first=q;
 }
 else
 {
     //chèn q xen giữa tp và p
     tp-> Link=q;
     q ->Link=p;
 }
 */

using namespace std;


int main() {



    return 0;
}



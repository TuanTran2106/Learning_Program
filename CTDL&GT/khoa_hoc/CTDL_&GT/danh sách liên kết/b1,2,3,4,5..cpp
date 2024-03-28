#include<iostream>
#include <stdio.h>


using namespace std;
//Bài 1,2.Cấu trúc danh sách
struct Node
{
    int a;
    Node *next;
};

void init(Node *&head)
{
    head=NULL;
}
Node* CreateNode(int x)
{
    Node *p=new Node;
    p->a =x;
    p->next =NULL;

    return p;
}
//Kết thúc B1,2.
//Bài 3,4:Thêm đầu, thêm cuối,thêm mặc định
void addFirst(Node* &head,int x)
{
    Node *p=CreateNode(x);
    p->next = head;
    head =p;
}
void addLast(Node* &head, int y)
{
    Node *p=CreateNode(y);
    if(head ==NULL)
    {
        head=p;
    }
    else
    {
        Node *last = head;
        while (last->next != NULL)
     {
            last=last->next;
     }
            //chèn vào cuối
            last->next =p;


    }

}
void addB(Node *&head,int v, int x)
{
    Node *p =CreateNode(x);
    Node *q =head;
    while(q!=NULL&&q->a!=v)
    {
        q =q->next;}
        if(q!=NULL)
            {
        // q t theo =p
        p->next =q->next;
        q->next =p;

}
}


void Output(Node* &head)
{
    Node* p =head;
    while(p !=NULL)
    {
        cout<<p->a<<"\t";
        p=p->next;
    }
}
//KT BÀI 3,4.
// Bài 5.Xóa đầu, xóa cuối, xóa chỉ định
void deleteFirst(Node *&head)
{

  Node *p=head;
  if(head!=NULL)
  {
      head =p->next;
      p->next =NULL;

  delete(p);
  }
}

void deleteLast(Node *&head)
{
    if(head!=NULL )
    {
    Node *last =head;
    Node *prev =NULL;

    while(last->next !=NULL)
    {
        prev =last;
        last =last->next;

    }
    prev->next =NULL;
  delete(last);
    }

}

void deletePT(Node *&head,int v)
{
    Node *p=head;
    Node *prev =NULL;
    while(p->a!=NULL&&p->a!=v)
    {
        prev =p;
        p=p->next;
    }
      prev->next = p->next;
      p->next =NULL;
      delete(p);

}
//KT BÀI 5.
int main() {
   Node* head;
   init(head);
  addLast(head,12);
   addFirst(head,10);
addLast(head,14);
   addFirst(head,9);
   addFirst(head,11);
addB(head,9,15);
   Output(head);
   cout<<endl;

  // deleteFirst(head);
  //deleteLast(head);
  deletePT(head,10);
   Output(head);
    return 0;
}


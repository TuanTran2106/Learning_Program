#include<iostream>
#include <stdio.h>
#include<string>

using namespace std;
struct Node
{
    Node *prev;
    int value;
    Node *next;
};
struct DoubleLink{
Node *head;
Node *tail; //trỏ phần tử cuối
};
 void init(DoubleLink &ls)
 {
     ls.head=NULL;
     ls.tail=NULL;
 }
Node* CreateNode(int x)
{
    Node *p =new Node;
    p->value =x;
    p->next =NULL;
    p->prev =NULL;

    return p;
}

void Addfirst(DoubleLink &ls,int x)
{
    Node *p =CreateNode(x);
    if(ls.head==NULL)
    {
        ls.head=ls.tail=p;
    }
    else
    {
    p->next =ls.head;
    ls.head->prev =p;
    ls.head =p;
    }

}

void Addlast(DoubleLink &ls,int x)
{
Node *p =CreateNode(x);
    if(ls.head==NULL)
    {
        ls.head=ls.tail=p;
    }
    else
    {
    p->prev=ls.tail;
    ls.tail->next = p;
    ls.tail =p;
    }
}

void addDB(DoubleLink &ls,int x,int v)
{
    Node *p =CreateNode(x);
    Node *q =ls.head;
    while(q!=NULL&&q->value!=v)
    {
        q=q->next;
    }
    if(q!=NULL)
    {
       if(q==ls.tail)
       {
           Addlast(ls,x);
       }else
       {
    p->next = q->next;
    q->next->prev =p;
    q->next=p;
    p->prev=q;
    }
}
}
void deleteFirst(DoubleLink &ls)
{
    Node *p=ls.head;
    if(p->value==NULL||p->prev==NULL&&p->next==NULL)
    {
        delete(p);
    }
    else
    {

        ls.head=p->next;

        p->next->prev =NULL;
         p->next=NULL;
        delete(p);



    }
}
void output(DoubleLink &ls)
{
    Node *p =ls.head;
    while(p!= NULL)
    {
        cout<<p->value<<"      ";
        p=p->next;
    }
}
int main() {
    DoubleLink ls;
    init(ls);
    Addfirst(ls,10);
    Addfirst(ls,20);
    Addlast(ls,40);
   Addfirst(ls,30);
   output(ls);
    cout<<endl;
    addDB(ls,50,40);
    output(ls);
    cout<<endl;
    deleteFirst(ls);
    output(ls);
    return 0;
}


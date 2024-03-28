#include<iostream>
#include <stdio.h>
#include<string>

using namespace std;
struct Node
{
    int value;
    Node *next;
};
struct Circle
{
    Node *head;
    Node *tail;
};

void init(Circle &ls)
{
    ls.head=NULL;
    ls.tail=NULL;

}
Node* CreateNode(int x)
{
    Node *p=new Node;
    p->value =x;
    p->next =NULL;
    return(p);
}

void Addfirst(Circle &ls,int x)
{
    Node *p = CreateNode(x);
     if(ls.head==NULL)
 {
    ls.head=ls.tail=p;
    ls.tail->next=ls.head;
 }
 else
 {
     p->next=ls.head;
     ls.head=p;
     ls.tail->next=ls.head;
 }
}
void Addlast(Circle &ls,int x)
{
    Node *p =CreateNode(x);
    if(ls.head==NULL)
    {
        ls.head=ls.tail=p;
    }
    else if(ls.head=ls.tail)
    {
        ls.head=p;
        p->next=ls.head;
    }
    else
    { ls.tail->next=p;

        p->next=ls.head;
        p=ls.tail;

    }

}
void Output(Circle &ls)
{
    if(ls.head!=NULL)
{
    Node *p =ls.head;
    do
    {
        cout<<p->value<<"      ";
        p=p->next;
    }
    while(p != ls.head);
}
}
int main() {
   Circle ls;
   init(ls);
   Addfirst(ls,10);
   Addfirst(ls,20);
   Addfirst(ls,30);
   Addlast(ls,40);
   Output(ls);
    return 0;
}


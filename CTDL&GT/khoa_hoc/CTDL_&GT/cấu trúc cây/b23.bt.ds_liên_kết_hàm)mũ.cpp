#include <iostream>
#define MAX 100
#include<math.h>
using namespace std;
struct Element
{
    double coeffs;
    int order;
};
struct Node
{
    Element value;
    Node *next;
};

void init(Node *&head)
{
    head=NULL;
}

Node *CreateNode(Element el)
{
    Node *p = new Node;
    p->value =el;
    p->next =NULL;
}
void insertNode(Node *&head,Element el)
{  Node *p = CreateNode(el);
    if(head==NULL)
    {
        head=p;
        return;
    }
    Node *r =head;
    Node *prev=NULL;
    while(r!=NULL&&r->value.order <=el.order)
    {
        //Phần tử cần chèn đã có
        if(r->value.order ==el.order)
        {
            r->value =el;
            break;
        }
        prev=r;
        r=r->next;
    }

    if(r==NULL)
    {
        prev->next=p;
    }
    else if(r->value.order!=el.order)
    {
      p->next=r;
    if(prev==NULL)
    {
        head=p;
    }else
    {
    prev->next=p;
    }
    }
}


void show(Node *head)
{
    Node *p =head;
    while(p!=NULL)
    {
        cout<<p->value.coeffs <<"*x^"<<p->value.order;
        if(p->next!=NULL)
        {
            cout<< " + ";
        }
        p=p->next;
    }
}

double f(Node *head,double x)
{
    Node *p=head;
    double kq=0;
    while(p!=NULL)
    {

        kq +=p->value.coeffs * pow(x,1.0*p->value.order);
        p=p->next;

    }
return kq;
}

int main()
{
  Node *head;
  init(head);
  Element e2,e5,e4,e1,e44;

  e2.order =2;
  e2.coeffs=15;

  e5.order=5;
  e5.coeffs=55;

  e4.order=4;
  e4.coeffs=20;

  e1.order=1;
  e1.coeffs=30;


   e44.order=4;
  e44.coeffs=100;

  insertNode(head,e2);
  insertNode(head,e5);
  insertNode(head,e4);
  insertNode(head,e1);
  insertNode(head,e44);
  show(head);

  double k = f(head,2);
  cout<<" Ket qua cua da thuc la :"<<k<<endl;
    return 0;
}

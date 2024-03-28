#include <iostream>
#define M 7
#include<math.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

void initHash(Node  *heads[])
{
    for(int i=0;i<M;i++)
    {
        heads[i]=NULL;
    }
}

Node *CreateNode(int x)
{
    Node *p=new Node;
    p->value=x;
    p->next=NULL;

    return p;

}

int hashFunc(int value)
{
    return value % M;
}

void insertNode(Node *heads[],int value)
{
    int h =hashFunc(value);
    Node *r=heads[h];

    Node *prev=NULL;

    while(r!=NULL&&r->value< value)
    {
        prev=r;
        r=r->next;
    }
    Node *p =CreateNode(value);
    if(prev==NULL)
    {
        heads[h]=p;
        p->next=r;
    }else if(r=NULL)
    {
        prev->next=p;
    }else
    {
        p->next=r;
        prev->next=p;
    }
}

void Display(Node *heads[])
{
    for(int i=0;i<M;i++)
    {
        if(heads[i]!=NULL)
        {
            cout<<"=== BUCKET" <<i<<"==="<<endl;
            Node *p=heads[i];
            while(p!=NULL)
            {
                cout<<p->value<<"    ";
                p=p->next;
            }
            cout<<endl;
        }
    }
}
void Delete(Node *heads[], int value)
{
   int h =hashFunc(value);
    Node *r=heads[h];
    Node *prev=NULL;
    while(r!=NULL&&r->value!=value)
    {
      prev=r;
      r=r->next;
    }
    if(r==NULL)
    {
        cout<<"KHONG TIM THAY PHAN TU XOA"<<endl;

    }
    else if(r->value=value)
    {
            prev->next=NULL;

      }
        delete(r);


     Display(heads);
}
Node *search(Node *heads[],int value)
{
    int h =hashFunc(value);
    Node *r=heads[h];

    while(r!=NULL&&r->value!=value)
    {
        r=r->next;
    }
    return r;
}
int main()
{
  Node *heads[M];
  initHash(heads);
  insertNode(heads,8);
  insertNode(heads,4);
  insertNode(heads,9);
  insertNode(heads,15);
  insertNode(heads,18);
   insertNode(heads,26);

  Display(heads);
  cout<<endl;
  Delete(heads,15);
  if(search(heads,6)==NULL)
    cout<<" Khong tim thay 6"<<endl;
  if(search(heads,18)!=NULL)
    cout<<" Tim thay 18"<<endl;
    if(search(heads,32)==NULL)
    cout<<" Khong tim thay 32"<<endl;
    return 0;
}

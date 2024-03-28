#include <iostream>
#define MAX 100
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
};

void init(Node *&root)
{
    root=NULL;
}

Node *CreateNode(int x)
{
     Node *p =new Node;
     p->key =x;
     p->left =NULL;
     p->right =NULL;

     return p;
}
void InsertNode(Node *&root, int x)
{
    if(root==NULL)
    {
        root=CreateNode(x);
    }
    else
    {
        Node *p =root;
        Node *parent =NULL;
        while(p!=NULL&&p->key!=x)
        {
            parent =p;
            if(p->key>x)
            {
                p=p->left;
            }else
            {
                p=p->right;
            }
        }
        if(p==NULL)
        {
            p=CreateNode(x);
            if(parent->key<x)
            {
                parent->right =p;
            }else
            {
                parent->left =p;
            }
        }

    }

}
Node* Search(Node *root,int x)
{
    Node *p=root;
    while(p!=NULL&&p->key!=x)
        {
            if(p->key>x)
            {
                p=p->left;
            }else
            {
                p=p->right;
            }
        }
        return p;
}
void lnr(Node *&root)
{
    if(root!=NULL)
    {
        lnr(root->left);
        cout<<root->key<<"      ";
        lnr(root->right);
    }
}
int main()
{
   Node *root;
   init(root);

   InsertNode(root,15);
   InsertNode(root,10);
   InsertNode(root,20);
   InsertNode(root,40);
   InsertNode(root,5);
   InsertNode(root,7);
 if(Search(root,20)!=NULL)
 {
     cout<<"TIM THAY 20"<<endl;
 }else
 {
     cout<<"KHONG TIM THAY 20"<<endl;
 }
   lnr(root);
    return 0;
}

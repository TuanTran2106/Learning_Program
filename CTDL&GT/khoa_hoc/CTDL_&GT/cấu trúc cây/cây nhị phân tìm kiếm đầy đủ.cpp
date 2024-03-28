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

void Delete(Node *root,int x)
{
    Node *p =root;
    Node *parent=NULL;
    while(p!=NULL&&p->key!=x)
    {
        parent =p;
        if(p->key<x)
        {
            p=p->right;
        }else
        {
            p=p->left;
        }
    }
    if(p!=NULL)
    {
   Node *t;
        if(p->left!=NULL&&p->right!=NULL)
        {
             Node *r = p->right;
             parent=p;
            while(r->left!=NULL)
            {
                parent =r;
                r=r->left;
            }
            p->key =r->key;
            p=r;
        }

        if(p->right==NULL)
        {
            t=p->left;
        }
        else if(p->left==NULL)
        {
            t=p->right;
        }


   /* while(p!=NULL&&p->key!=x)
    {
        parent =p;
        if(p->key<x)
        {
            p=p->right;
        }else
        {
            p=p->left;
        }
    }
    if(p->left==NULL&&p->right==NULL)
    {
        if(parent->key> p->key)
        {
            parent->left=NULL;
        }else if(parent->key <p->key)
        {
            parent->right=NULL;
        }

    }else if(p->left!=NULL)
    {
        parent->left=p->left;
    }
    else if(p->right!=NULL)
    {
        parent->right=p->right;
    }
    else if(p->left!=NULL&&p->right!=NULL)
    {

    }
    delete(p);
}
void lnr(Node *&root)
{
    if(root!=NULL)
    {
        lnr(root->left);
        cout<<root->key<<"      ";
        lnr(root->right);
    }
    */

    if(parent->key>p->key)
    {
        parent->left=t;
    }else
    {
        parent->right=t;
    }
    delete(p);
}
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
   InsertNode(root,20);
   InsertNode(root,8);
   InsertNode(root,40);
   InsertNode(root,18);
   InsertNode(root,12);
    InsertNode(root,90);
     InsertNode(root,50);
 /*if(Search(root,20)!=NULL)
 {
     cout<<"TIM THAY 20"<<endl;
 }else
 {
     cout<<"KHONG TIM THAY 20"<<endl;
 }
 */
 Delete(root,20);
   lnr(root);
    return 0;
}

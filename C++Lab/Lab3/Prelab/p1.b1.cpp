#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
//Viết hàm tạo 1 linklisst
struct node
{
    int data;
    node* next;
};
node* createLinkedList(int n)
{
    node* head =nullptr;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        node* new_node =new node;
        new_node->data=value;
        new_node->next=head;
        head=new_node;
    }
    return head;
}
//Thực hiện so sánh 2 node
int countNode(node* head)
{
    int count=0;
    node* current=head;
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
    return count;
}
bool isEqual(node* head1,node* head2)
{
    if(head1==NULL||head2==NULL)
    {
        return false;
    }
    int n=0;
    int m=0;
    while(head1->next!=nullptr)
    {
        n++;
    }
    while(head2->next!=nullptr)
    {
        m++;
    }
    if(n!=m)
    {
        return false;
    }
    else
    {
        int count =0;
        while(head1!=NULL)
        {
            if(head1->data==head2->data)
            {
                count++;
                head1=head1->next;
                head2=head2->next;
            }
            else
            {
                return false;
            }
        }
        if(count==n)
        {
            return true;
        }
    }
}


//Thực hiện chức năng in


void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}

int main()
{
    int n=0;
    cin>>n;
    node* head1=createLinkedList(n);
    //int m=0;
    //cin>>m;
    //node* head2=createLinkedList(m);
    //cout<<isEqual(head1,head2)<<endl;

    print(head1);
    cout<<endl;
    cout<<countNode(head1);
    return 0;
}

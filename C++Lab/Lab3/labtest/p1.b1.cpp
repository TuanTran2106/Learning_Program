#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data = 0, Node* next = nullptr) { this->data = data; this->next = next; }
    reverseBetween(Node *head, int left, int right) ;
};

Node* reverseBetween(Node *head, int left, int right)
{
    // TO DO
    int count=0;
    Node* q=head;
    Node* p=head;
    while(p!=NULL)
    {
        p=p->next;
        count++;
    }
    Node* tail= head;
    int l=left;
    int r=right;
    while(l>=0)
    {
        head=head->next;
        l--;
    }
    while(r>=0)
    {
        tail=tail->next;
        r--;
    }
    while(head!=tail)
    {
        swap(head->data,tail->data);
        head++;
        tail--;
    }
    while(q!=NULL)
    {
        cout<<q->data;
        q=q->next;
    }
}
int main()
{
    Node* head;
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int left;int right;
    cin>>left;
    cin>>right;
    reverseBetween(head,left,right);
}

#include<iostream>
#include <stdio.h>
#include<string>

using namespace std;
#define MAX 100
struct Stack
{
  int a[MAX];
  int top;

};
void init (Stack &s)
{
    s.top =-1;

}
void push(Stack &s,int x)
{
    s.top++;
    s.a[s.top]=x;
}

int pop(Stack &s)
{
    int x=s.a[s.top];
    s.top--;
    return(x);
}

bool isEmpty(Stack &s)
{
   /* if(s.top<0)
    {
        return true;
    }
    else
    {
        return false;
    }
    */
    return s.top <0;
}

bool isFull(Stack &s)
{
    return s.top ==MAX;
}

void Output (Stack &s)
{
    for(int i=0;i<=s.top;i++)
    {
        cout<<s.a[i]<<"      ";
        cout<<endl;
    }
}
int main() {
   Stack s;
   init(s);
   push(s,10);
   push(s,20);
   push(s,30);
   Output(s);
   push(s,100);
   Output(s);
    return 0;
}


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

    }
}
void toBinary(int n)
{
    Stack s;
    init(s);

    while(n!=0)
    {
        int d =n%2;
        push(s,d);
        n/=2;  //(n=n/2)

    }
    while(isEmpty(s)==false)
  {
        cout<<pop(s);
    cout<<endl;
      }
}
void toBinary1(int n,int radix)
{
    Stack s;
    init(s);

    while(n!=0)
    {
        int d =n%radix;
        push(s,d);
        n/=radix;  //(n=n/2)

    }
    while(isEmpty(s)==false)
  {
        cout<<pop(s);
    cout<<endl;
      }
}
int main() {
   /*Stack s;
   init(s);
   push(s,10);
   push(s,20);
   push(s,30);
   Output(s);
   cout<<endl;
   //push(s,100);
   pop(s);
   Output(s);
   PT(s);
   Output(s);*/
   toBinary(25);
   toBinary1(125,8);
    return 0;
}


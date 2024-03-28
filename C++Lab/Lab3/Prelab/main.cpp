#include"template.h"

int main()
{
    CreateList<char> CL(10);
    CL.Push('a');
    CL.Push('b');
    CL.Push('c');
    while(!CL.isEmpty())
    {
        cout<<CL.Pop()<<endl;
    }
    return 0;
}

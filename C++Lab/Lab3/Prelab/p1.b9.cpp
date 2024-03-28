#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
class Integer
{
private:
    int val;
public:
    Integer(int val);
    Integer(Integer* other);
    Integer operator +(const Integer& other) const;
    Integer operator +(int val);
    void print();
};

Integer::Integer(int val)
{
    this->val=val;
}
Integer::Integer(Integer* other)
{
    this->val=other->val;
}
Integer Integer::operator +(const Integer& other) const
{
   return  Integer(this->val+other.val);
}
Integer Integer::operator +(int val)
{
    return Integer(this->val+val);
}
void Integer::print()
{
    cout<<this->val<<endl;
}
int main()
{
 int x;int y;int z;
 cin>>x>>y>>z;
 Integer a(x);
 Integer b(y);
// Integer* t=new Integer(z);
 Integer c(z);
 a.print();b.print();
 (a+b+c+4).print();

// delete t;
 return 0;
}

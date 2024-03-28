#include <iostream>
// iostream : in out

using namespace std;

int main()
{
  int a[100];
  int n;
  cout<<"Nhap n"<<endl;
  cin>>n;
  int i;

  for(  i =0;i<n;i++)
  {
      cin>>a[i];
  }
  cout<<"\nIn ra mảng"<<endl;
  for( i =0;i<n;i++)
  {
      cout<<a[i]<<endl;
  }
}

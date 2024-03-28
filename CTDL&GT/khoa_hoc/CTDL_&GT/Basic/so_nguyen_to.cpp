#include <iostream>
// iostream : in out

using namespace std;
int kiemtraSNT(int so)
{
    int dem=0;
    for( int i=1;i<=so;i++)
  {
      if(so%i==0)
      {
          dem++;
      }
  }
          if(dem ==2)
          {
              return 1;
          }
          else{
            return 0;
          }
}
int main()
{
    int i;
    for( i=1;i<=100;)
 {
     if(kiemtraSNT(i)==1)
     {
         cout<<i<<endl;
     }
     i++;
 }
 return 0;

}

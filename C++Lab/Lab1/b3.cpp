#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;

int calc(char str[])
{
	int n=strlen(str);
	int s=0;
	for(int i=0;i<n;i++)
	{
		s=s*2+(int)str[i] -'0';
	}
	return s;
}
int main()
{
	char str[] ="001011";
	cout<< calc(str);
}

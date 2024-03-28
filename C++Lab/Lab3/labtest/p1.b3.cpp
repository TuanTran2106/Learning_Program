#include<iostream>
#include<string>
#include<sstream>
#include<fstream>

using namespace std;
/*
bool NT(int n)
{
    int i=n-1;
    while(i>=2)
    {
        if(n%i==0)
        {
            return false;
            break;
        }
        i--;
    }
    return true;
}

int nguyento(int arr[],int n)
{
    int i=n+1;
    for(int i=0;i<n;i++)
    {
        int j=0;
        while(!NT(arr[i]+j))
        {
            j++;
        }
        arr[i]=arr[i]+j;
    }
}

int max2(int arr[],int n)
{
    if(n==2&&arr[0]<arr[1])
    {
        return arr[0];
    }
    if(n==2&&arr[0]>arr[1])
    {
        return arr[1]+1;
    }
    if(n>=3)
    {
        int max2=max(arr[0],max(arr[1],arr[2]));
        int min2=min(arr[0],min(arr[1],arr[2]));
        int s=arr[0]+arr[1]+arr[2];
        int kq=s-max2-min2;
        if(kq==max2)
        {
            return min2;
        }
        if(kq==arr[0])
        {
            return arr[0];
        }
        else if(kq==arr[1])
        {
            return arr[1]+1;
        }
        else if(kq==arr[2])
        {
            return arr[2]+2;
        }

    }
}
*/

void timchuoi(int hp)
{
    int size;
    ifstream input("input.txt");
    stringstream ss;
    string s;
    input>>size;
    while(!input.eof())
    {
        getline(input,s);
    if(input.good())
    {
        input>>s;
        int count=s.length();
        int dem1=0;int dem2=0;int dem3=0;int dem4=0;int dem5=0;int dem6=0;
        if(s.find("merlin")!= string::npos||s.find("Merlin")!= string::npos)
        {
            hp=hp+3;
            if(hp>999)
            {
                hp=999;
            }
        }
        else
        {
            for(int i=0;i<count;i++)
            {
                if(s[i]=='m'||s[i]=='M')
                {
                    dem1++;
                }
                if(s[i]=='e'||s[i]=='E')
                {
                    dem2++;
                }
                if(s[i]=='r'||s[i]=='R')
                {
                    dem3++;
                }
                if(s[i]=='l'||s[i]=='L')
                {
                    dem4++;
                }if(s[i]=='i'||s[i]=='I')
                {
                    dem5++;
                }if(s[i]=='n'||s[i]=='N')
                {
                    dem6++;
                }
            }
            if(dem1>0&&dem2>0&&dem3>0&&dem4>0&&dem5>0&&dem6>0)
            {
                hp=hp+2;
                if(hp>999)
                {
                    hp=999;
                }
            }
        }
    }

    }
    cout<<hp;
}
int main()
{
    /*
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    nguyento(arr,n);
   cout<<max2(arr,n);
    return 0;
*/
int hp;
cin>>hp;
timchuoi(hp);
}


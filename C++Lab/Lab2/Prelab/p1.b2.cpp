#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
/*
void swap(int *ptr1,int *ptr2)
{
 int* temp;
 *temp=*ptr1;
 *ptr1=*ptr2;
 *ptr2=*temp;
}
int main()
{
    int a=5;
    int b=6;
    swap(&a,&b);
    cout<<a<<" "<<b;
}
*/
/*
int* zeros(int n)
{
    if(n>0)
    {
    for(int i=0;i<n;i++)
    {
        cout<<"0";
    }
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    zeros(n);
}
*/

/*
void shallowCopy(int*& newArr,int*& arr)
{
    newArr=arr;
}
int main()
{
    int* arr= new int[2];
    arr[0]=2;
    arr[1]=3;
    int* newArr=nullptr;
    shallowCopy(newArr,arr);
    cout<<newArr[0]<<' '<<newArr[1];
    delete[] arr;
}
*/

/*
int** deepCopy(int** matrix,int r,int c)
{
    return matrix;
}
int main()
{
    int** m=new int*[2];
    m[0]= new int[2];m[0][0]=1;m[0][1]=2;
    m[1]= new int[2];m[1][0]=1;m[1][1]=3;
    int** n=deepCopy(m,2,2);
    cout<<n[0][0]<<' '<<n[0][1]<<'\n'<<n[1][0]<<' '<<n[1][1];
}
*/
/*
void deleteMatrix(int**& matrix,int r)
{
    for(int i=0;i<r;i++)
    {
    matrix[i] =new int[2];
    }
    free(matrix);
    if( matrix==nullptr)
    {
    cout<<"SUCCESSFUL";
    }
    else
    {
        cout<<'\0';
    }

}
int main()
{
    int r=3;
    int** matrix=new int*[3];
    for(int i=0;i<3;i++)
    {
    matrix[i] =new int[2];
    }
    for(int i=0;i<3;i++)
    {
        cin>>matrix[i][0]>>matrix[i][1];
    }
    deleteMatrix(matrix,r);
}
*/

void insertRow(int**& matrix,int r,int c,int* rowArr,int row)
{
    int** newMatrix=new int*[r+1];
    for(int i=0;i<r+1;i++)
    {
        newMatrix[i]=new int[c];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<c;j++)
        {
            newMatrix[i][j]=matrix[i][j];
        }
    }
    for(int j=0;j<c;j++)
    {
        newMatrix[row][j]=rowArr[j];
    }
    for(int i=row+1;i<=r;i++)
    {
        for(int j=0;j<c;j++)
        {
            newMatrix[i][j]=matrix[i-1][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix =newMatrix;
    for(int i=0;i<r+1;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<matrix[i][j]<<' ';
        }
        cout<<endl;
    }
}
int main()
{
    int r;
    int c;
    cin>>r;
    cin>>c;
    int row;
    int** matrix = new int*[r];
    for(int i=0;i<r;i++)
    {
        matrix[i]=new int[c];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cin>>row;
    int* rowArr=new int[1];
    for(int i=0;i<c;i++)
    {
        cin>>rowArr[i];
    }
    insertRow(matrix,r,c,rowArr,row);
}


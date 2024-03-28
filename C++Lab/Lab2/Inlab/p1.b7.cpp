#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
/*
int** insertCol(int**& matrix,int r,int c,int* colArr,int col)
{
    int** Newmatrix = new int*[r];
    for(int i=0;i<c+1;i++)
    {
        Newmatrix[i]=new int[c+1];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            Newmatrix[i][j]=matrix[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        Newmatrix[i][col]=colArr[i];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=col+1;j<c+1;j++)
        {
            Newmatrix[i][j]=matrix[i][j-1];
        }
    }
    delete[] matrix;
    matrix =Newmatrix;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c+1;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}
*/
bool deleteRow(int**& matrix, int r, int c, int row) {
    // TODO

    int** matrixc=new int*[r-1];
    if(row>=r)
    {
        matrixc=nullptr;
    }
    for(int i=0;i<c;i++)
    {
        matrixc[i] = new int[c];
    }

    for(int i=row;i<r-1;i++)
    {
        for(int j=0;j<c;j++)
        {
            matrixc[i][j]=matrix[i+1][j];
        }
    }


    delete[] matrix;
    matrix=matrixc;
   // return matrix;
    for(int i=0;i<r-1;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    /*
    int r;
    int c;
    cin>>r;
    cin>>c;
    int** matrix=new int*[r];
    for(int i=0;i<c;i++)
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
    int col;
    cin>>col;
    int* colArr=new int[col];
    for(int i=0;i<col;i++)
    {
        cin>>colArr[i];
    }
    insertCol(matrix,r,c,colArr,col);
    */

    int r;
    int c;
    cin>>r;
    cin>>c;
    int** matrix=new int*[r];
    for(int i=0;i<c;i++)
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
    int row;
    cin>>row;
    cout<<deleteRow(matrix,r,c,row);
}

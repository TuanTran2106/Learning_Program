#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

class Course
{
private:
    int ID;
    int numOfStudent;
    int numOfTeacher;
    int numOfTA;
public:
    void getinfo();
    void disinfo();
};

void Course::getinfo()
{
    cout<<"ID: ";
    cin>>ID;
    cout<<"Num ofST: ";
    cin>>numOfStudent;
    cout<<"Num ofteacher: ";
    cin>>numOfTeacher;
    cout<<"Num of TA ";
    cin>>numOfTA;
}
void Course::disinfo()
{
    cout<<endl;
    cout<<"CourseID = "<<ID<<endl;
    cout<<"Num ofST ="<<numOfStudent<<endl;
    cout<<"Num ofTC = "<<numOfTeacher<<endl;
    cout<<"nUM OFTA = "<<numOfTA<<endl;
}
int main()
{
    int n;
    cin>>n;
    Course course;
    int** arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[4];
    }
    for(int i=0;i<n;i++)
    {
        course.getinfo();
    }
    for(int i=0;i<n;i++)
    {
        course.display();
    }

}

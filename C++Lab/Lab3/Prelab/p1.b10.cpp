#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

class Book
{
public:
    Book(const char*);
    ~Book();
    void display();
private:
    char* name;
};

Book::Book(const char* pBook)
{
    size_t length=strlen(pBook);
    name=new char[length+1];
    //strncpy: name: chuỗi đích, pBook :chuỗi sao chép,length: kiểu size_t;
    strncpy(name,pBook,length);
    name[length]='\0';
}
Book::~Book()
{
    delete[] name;
}
void Book::display()
{
        cout<<"Book: "<<this->name;
}
int main()
{
    Book* pBook=new Book("To Kill a MockingBird");
    pBook->display();
    delete pBook;
}

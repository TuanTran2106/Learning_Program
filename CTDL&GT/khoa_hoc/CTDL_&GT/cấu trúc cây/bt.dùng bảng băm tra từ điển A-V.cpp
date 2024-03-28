#include <iostream>
#define M 101
#include<math.h>
#include<string>
#include<fstream>
using namespace std;
struct Word
{
    string word;
    string type;
    string mean;
};

struct DictNode
{
    Word word;
    DictNode *next;
};

void init(DictNode *heads[])
{
    for(int i=0;i<M;i++)
    {
        heads[i]=NULL;
    }
}

int hash1(string en)
{
     int h =0;
    for(int i=0;i<en.length();i++)
    {
        h+=(int)tolower(en[i]);
    }
    return h%M;
}

int hashFunc(Word w)
{
   return hash1(w.word);
}


DictNode *CreateWord(Word w)
{
    DictNode *word =new DictNode;
    word->word=w;
    word->next=NULL;

    return word;
}
void addWord(DictNode *heads[],Word w)
{
    int h = hashFunc(w);
    DictNode *r=heads[h];
    DictNode *p=CreateWord(w);
    if(r==NULL)
    {
        heads[h]=p;
    }
    else
    {
        //kỹ thuật cờ
        bool flag =false;
        while(r->next!=NULL&& flag==false)
        {
            if(r->word.word.compare(w.word)==0)
            {
                flag=true;
            }
            else
            {
            r=r->next;
            }
        }
        if(flag==false)
        {
        r->next=p;
        }
        //sử dụng hash
        /*
        if(r==NULL)
        {
            heads[h]=p;
        }else
        {
            int t=hashFunc(r->word);
            while(r->next!=NULL)
            {
                t=hashFunc(r->word);

            if(t==h)
            {
                break;
            }
            else
            {
                r=r->next;
            }
            }
            if(t!=h)
            {
                r->next=h;
            }
            */
        }
    }

void UpdateWord(DictNode *heads[],Word w)
{
    int h = hashFunc(w);
    DictNode *r =heads[h];

    if(r!=NULL)
    {
        int t=hashFunc(r->word);
            do
            {
                t=hashFunc(r->word);

            if(t==h)
            {
                cout<<"Update"<<endl;
                r->word =w;
                break;
            }

                r=r->next;

            }while(r!=NULL);
    }
}

void search(DictNode *heads[],string en)
{
    int h =hash1(en);
    DictNode *r =heads[h];

    while(r!=NULL)
    {
        int h1 = hashFunc(r->word);
        if(h==h1)
        {
            cout<<"( "<<r->word.type <<") :"<<r->word.mean<<endl;
            break;
        }
        r=r->next;
    }
}
void Display(DictNode *heads[])
{
    for(int i=0;i<M;i++)
    {
        if(heads[i]!=NULL)
        {
            cout<<"=== BUCKET"<< i<<"===";
            DictNode *p=heads[i];
            while(p!=NULL)
            {
                cout<<"  "<<p->word.word << " ("<<p->word.type <<"): "<<p->word.mean<<endl;
                p=p->next;
            }
        }
    }
}
void readDict(DictNode *heads[])
{
    ifstream f;
    f.open("dicts.txt", ios::in);

    while(!f.eof())
    {
        Word w;
        getline(f,w.word);
        getline(f,w.type);
        getline(f,w.mean);

        addWord(heads,w);
    }
    f.close();

}

void Delete(DictNode *heads[],string en)
{
    int h =hash1(en);
    DictNode *r =heads[h];
    DictNode *prev =NULL;
    while(r!=NULL)
    {
        if(r->word.word.compare(en)==0)
        {
            if(prev==NULL)
            {
                heads[h]=r->next;
            }else
            {
            prev->next=r->next;
            }
            r->next=NULL;
        delete(r);
            break;
        }
        prev=r;
         r=r->next;
    }
}
int main()
{
   cout<<"TU DIEN" <<endl;
   Word w1, w2,w3,w4,w5;

   w1.word="HELLO";
   w1.type="v";
   w1.mean="Xin chao";

   w2.word="TEACHER";
   w2.type="n";
   w2.mean="Giao vien";

   w3.word="Good";
   w3.type="adj";
   w3.mean="Tot";

    w4.word="Good";
   w4.type="adj";
   w4.mean="Tot hon";

   w5.word="Bad";
   w5.type="adj";
   w5.mean="Do";

   DictNode *dicts[M];
   init(dicts);

   addWord(dicts,w1);
   addWord(dicts,w2);
   addWord(dicts,w3);
  addWord(dicts,w4);
  addWord(dicts,w5);
   //Display(dicts);

   search(dicts,"Bad");

   readDict(dicts);
   Delete(dicts,"Computer");
   Display(dicts);

  // Display(dicts);
 //  Display(dicts);
  // UpdateWord(dicts,w5);
   //cout<<" KET QUA CAP NHAP ====";
   ///cout<<endl;
   //Display(dicts);

    return 0;
}

#include<iostream>
#include<cstring>

using namespace std;
void printFirstRepeatedWord(char str[]) {
    // TODO
    char* temp = &str(strlen(str) + 1);
    for (int i = 0; i < strlen(str); i++)
    {
        temp[i] = str[i];
    }
    int t = 0;
    if (str[0] != '\0')
    {
        char* p = strtok(str, " ");
        while (p != NULL)
        {
            if (!strchr(temp, ' '))
            {
                break;
            }
            str = strchr(temp, ' ') + 1;
            if (strstr(str, p))
            {
                cout << p;
                t++;
                break;
            }
        }
    }
    if (t == 0)
    {
        cout<< "No Repetition"
    }


}

int main()
{
    char str[] = "car taxi bike bike car taxi";
    printFirstRepeatedWord(str);
}
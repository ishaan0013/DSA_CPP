#include <iostream>
#include <string.h>
using namespace std;
void Upper(char ch[])
{
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == ((int)32))
        {
            continue;
        }
        else
        {
            // int num = ch[i];
            // ch[i] = ((char)(num - 32));
            // OR
            ch[i] = ch[i] - 'a' + 'A';
        }
    }
    cout << ch;
}

int main()
{
    char ch[100];
    cout << "Enter string in lower case: " << endl;
    cin.getline(ch, 100);
    Upper(ch);
}
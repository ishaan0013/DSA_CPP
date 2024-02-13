#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int start = 0;
    int end = strlen(ch) - 1;
    bool flag = true;
    while (start <= end)
    {
        if (ch[start] != ch[end])
        {
            flag = false;
            break;
        }
        else
        {
            start++;
            end--;
        }
    }
    (flag == true) ? cout << "True" : cout << "False";

    return 0;
}

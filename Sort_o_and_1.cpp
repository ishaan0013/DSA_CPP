#include <iostream>
#include <vector>
using namespace std;
void Sort(vector<int> ans, int a)
{
    int fst = 0;
    int lst = a - 1;

    while (fst < lst)
    {
        if (ans[fst] == 0 && ans[lst] == 1)
        {
            fst++;
            lst--;
        }
        else if (ans[fst] == 0 && ans[lst] == 0)
        {
            fst++;
        }
        else if (ans[fst] == 1 && ans[lst] == 1)
        {
            lst--;
        }
        else
        {
            swap(ans[fst], ans[lst]);
            fst++;
            lst--;
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int a;
    cout << "Enter the size of array:\n";
    cin >> a;
    cout << "Enter values of array:\n";
    vector<int> ans(a);
    for (int i = 0; i < a; i++)
    {
        cin >> ans[i];
    }

    Sort(ans, a);
}

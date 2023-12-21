// Here the order does not matter
// 1|2|3 is also correct and 2|1|3 is also correct
#include <iostream>
#include <vector>
using namespace std;
void Move(vector<int> arr)
{
    int fst = 0, lst = arr.size();
    while (fst <= lst)
    {
        if (arr[fst] < 0 && arr[lst] > 0)
        {
            fst++;
            lst--;
        }
        else if (arr[fst] > 0 && arr[lst] < 0)
        {
            swap(arr[fst], arr[lst]);
            fst++;
            lst--;
        }
        else if (arr[fst] < 0 && arr[lst] < 0)
        {
            fst++;
        }
        else
        {
            lst--;
        }
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> arr{4, 5, 6, -9, -9, 9, 4, -5, 6, 3, 4, 5, -6, 12, -1};
    Move(arr);
}
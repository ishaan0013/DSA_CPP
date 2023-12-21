// 75. Sort Colors
#include <iostream>
#include <vector>
using namespace std;
void Sort(vector<int> arr)
{
    int l = 0, m = 0, h = arr.size() - 1;
    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[m], arr[l]);
            l++;
            m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }
    for (auto v : arr)
    {
        cout << v << " ";
    }
}
int main()
{

    vector<int> arr{1, 1, 0, 0, 2, 1, 0, 2, 0, 1, 2, 0, 1, 2, 0, 1};
    Sort(arr);
}

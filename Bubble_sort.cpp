// Syncing sort
#include <iostream>
#include <vector>
using namespace std;
void Sort(vector<int> &arr)
{
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        for (int j = 0; j <= arr.size() - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    vector<int> arr{10, 100, 79, 6, 14, 9, 44, 55, 1, 89, 0, 1, 4, 5, 66, 7};
    Sort(arr);
    for (auto v : arr)
    {
        cout << v << " ";
    }
}
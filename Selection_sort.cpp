#include <iostream>
#include <vector>
using namespace std;
vector<int> Sort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int ans = i;
        for (int j = (i + 1); j < arr.size(); j++)
        {
            if (arr[j] < arr[ans])
                ans = j;
        }
        swap(arr[i], arr[ans]);
    }
    return arr;
}
int main()
{
    vector<int> arr{40, 30, 10, 5, 9, 8, 1, 56, 90};
    Sort(arr);
    for (auto v : arr)
    {
        cout << v << " ";
    }
}
#include <iostream>
#include <vector>
using namespace std;
void Sort(vector<int> &arr)
{
    for (int round = 1; round < arr.size(); round++)
    {
        int val = arr[round];
        int j = round - 1;
        for (; j >= 0; j--)
        {
            if (val < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = val;
    }
}
int main()
{
    vector<int> arr{5, 1, 4, 6, 0, -5, 78, 34, 67, 12, 90, 2};
    Sort(arr);
    for (auto v : arr)
    {
        cout << v << " ";
    }
}
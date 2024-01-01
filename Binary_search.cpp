#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int SearchNum(vector<int> arr, int flag)
{
    sort(arr.begin(), arr.end());
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == flag)
        {
            return mid;
        }
        if (arr[mid] < flag)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}
int main()
{

    vector<int> arr{1, 3, 4, 6, 2, 65, 8, 0, -7, -5, -4, 7};
    int flag = 65;
    (SearchNum(arr, flag) == -1) ? cout << "Item not found" : cout << "Item found";
}
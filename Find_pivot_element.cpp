#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Pivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + ((end - start) / 2);
    while (start < end)
    {
        if (mid + 1 <= arr.size() - 1 && arr[mid] > arr[mid + 1])
            return mid;
        else if (mid - 1 >= 0 && arr[mid - 1] > arr[mid])
            return (mid - 1);
        if (arr[start] >= arr[mid])
            end = mid - 1;
        else
            start = mid;

        mid = start + ((end - start) / 2);
    }
    return start;
}
int main()
{
    vector<int> arr{3, 4, 5, 6, 7, 1, 2};
    cout << "Index of Pivot element is " << Pivot(arr);
}
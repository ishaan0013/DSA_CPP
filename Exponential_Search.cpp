#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binSearch(int start, int end, int flag, vector<int> arr)
{
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == flag)
            return mid;
        else if (arr[mid] > flag)
            end = mid - 1;
        else
            start = mid + 1;

        mid = start + ((end - start) / 2);
    }
    return -1;
}
int expSearch(vector<int> &arr, int flag)
{
    int size = arr.size();
    if (arr[0] == flag)
        return 0;
    int i = 1;
    while (i < size && arr[i] < flag)
    {
        i = i * 2; // i=i<<1;
    }
    return binSearch(i / 2, min(size - 1, i), flag, arr);
}
int main()
{
    vector<int> arr{3, 4, 5, 6, 11, 13, 14, 15, 56, 78};
    int flag = 56;
    sort(arr.begin(), arr.end());
    cout << "Index is: " << expSearch(arr, flag);
}
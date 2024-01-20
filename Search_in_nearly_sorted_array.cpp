// Nearly sorted array means  item is present in its "i or i-1 or i+1" position.

#include <iostream>
#include <vector>
using namespace std;
int NearlySorted(vector<int> arr, int flag)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == flag)
        {
            return mid;
            break;
        }
        else if (mid - 1 >= 0 && arr[mid - 1] == flag)
        {
            return mid - 1;
            break;
        }
        else if (mid + 1 < arr.size() && arr[mid + 1] == flag)
        {
            return mid + 1;
            break;
        }
        if (arr[mid] < flag)
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }

        mid = start + ((end - start) / 2);
    }
    return -1;
}
int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70, 90, 100, 120, 110, 150};
    int flag = 120;
    cout << "Item Found at index: " << NearlySorted(arr, flag);
}
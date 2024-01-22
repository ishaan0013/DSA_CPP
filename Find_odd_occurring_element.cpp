#include <iostream>
#include <vector>
using namespace std;
int OddNumber(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (start == end)
        {
            return start;
        }
        else if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else if (arr[mid] == arr[mid - 1])
            {
                end = mid - 2;
            }
            else
            {
                return mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid + 1])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        mid = start + ((end - start) / 2);
    }
    return -1;
}
int main()
{
    vector<int> arr{100, 1, 1, 6, 6, 5, 5, 78, 78, 2, 2, 4, 4, 5, 5, 8, 8, 1, 1, 6, 6, 78, 78};
    int ans = OddNumber(arr);
    cout << "Element is: " << arr[ans] << " which is present at index: " << ans;
}
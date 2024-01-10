// 852. Peak Index in a Mountain Array

// An array arr is a mountain if the following properties hold:

// 1.- arr.length >= 3
// 2.- There exists some i with 0 < i < arr.length - 1 such that:
//              - arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
//              - arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

// Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
// You must solve it in O(log(arr.length)) time complexity.

// Example 1:
// Input: arr = [0,2,1,0]
// Output: 1

// Example 2:
// Input: arr = [0,10,5,2]
// Output: 1

#include <iostream>
#include <vector>
using namespace std;
void Mountain(vector<int> arr)
{
    int ans;
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            ans = mid;
            break;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    cout << ans;
}
int main()
{
    vector<int> arr{3, 5, 6, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    Mountain(arr);
}
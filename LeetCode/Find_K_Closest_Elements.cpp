// 658. Find K Closest Elements

// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

// An integer a is closer to x than an integer b if:
// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b

//  Example 1:
// Input: arr = [1,2,3,4,5], k = 4, x = 3
// Output: [1,2,3,4]

// Example 2:
// Input: arr = [1,2,3,4,5], k = 4, x = -1
// Output: [1,2,3,4]

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void Closest(vector<int> arr, int k, int x)
{
    //! 1st Method (Sort according to the Difference)
    // multimap<int, int> mymap;
    // vector<int> ans;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     mymap.insert({abs(x - arr[i]), arr[i]});
    // }
    // auto it = mymap.begin();

    // for (int i = 0; i < k; i++)
    // {
    //     ans.push_back(it->second);
    //     it++;
    // }

    // sort(ans.begin(), ans.end());

    // for (auto i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << endl;
    // }

    //! 2st Method (Two Pointer)
    // int l = 0;
    // int h = arr.size() - 1;
    // while (h - l >= k)
    // {
    //     if (abs(arr[l] - x) > abs(arr[h] - x))
    //     {
    //         l++;
    //     }
    //     else
    //     {
    //         h--;
    //     }
    // }
    // for (int i = l; i <= h; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    //! 3rd Method (Two Pointer + Binary Search)
    int start = 0, end = arr.size() - 1;
    int most_close = end;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] >= x)
        {
            most_close = mid;
            end = mid - 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    int h = most_close;
    int l = h - 1;
    while (k--)
    {
        if (l < 0)
        {
            h++;
        }
        else if (h >= arr.size())
        {
            l--;
        }
        else if (abs(x - arr[l]) > abs(x - arr[h]))
        {
            h++;
        }
        else
        {
            l--;
        }
    }
    for (int i = l + 1; i <= h - 1; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    sort(arr.begin(), arr.end());
    int k = 4;
    int x = 3;
    Closest(arr, k, x);
}
// 532. K-diff Pairs in an Array
// Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

// A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:
// 0 <= i, j < nums.length
// i != j
// |nums[i] - nums[j]| == k
// Notice that |val| denotes the absolute value of val.

// Example 1:
// Input: nums = [3,1,4,1,5], k = 2
// Output: 2
// Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
// Although we have two 1s in the input, we should only return the number of unique pairs.
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int BianrySearch(int start, int end, vector<int> arr, int flag)
{
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

int UniquePairs(vector<int> arr, int val)
{
    //! 1st Method (2 pointer)
    // sort(arr.begin(), arr.end());
    // int i = 0;
    // int j = (i + 1);
    // set<pair<int, int>> myset;
    // while (j <= arr.size() - 1)
    // {
    //     if (arr[j] - arr[i] == val)
    //     {
    //         myset.insert({arr[i], arr[j]});
    //         i++;
    //         j++;
    //     }
    //     else if (arr[j] - arr[i] > val)
    //     {
    //         i++;
    //     }
    //     else
    //     {
    //         j++;
    //     }
    //     if (i == j)
    //     {
    //         j++;
    //     }
    // }
    // return myset.size();
    //! 2nd Method (Binary Search)
    sort(arr.begin(), arr.end());
    set<pair<int, int>> myset;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = BianrySearch((i + 1), arr.size() - 1, arr, arr[i] + val);
        if (ans != -1)
        {
            myset.insert({arr[i], arr[i] + val});
        }
    }
    return myset.size();
}

int main()
{
    vector<int> arr{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int val = 0;
    cout << UniquePairs(arr, val);
}
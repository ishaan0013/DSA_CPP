// 287. Find the Duplicate Number
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
void FindDuplicate(vector<int> arr);
int main()
{
    vector<int> arr{1, 3, 4, 8, 2, 5, 6, 7, 8};
    // vector<int> arr{2, 2, 2, 2, 2};
    FindDuplicate(arr);
}
void FindDuplicate(vector<int> arr)
{
    //! 1st Method.
    // sort(arr.begin(), arr.end());
    // for (int i = 0; i < arr.size() - 1; i++)
    // {
    //     if (arr[i] == arr[i + 1])
    //     {
    //         cout << arr[i];
    //     }
    // }
    //! 2nd Method.
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = (i + 1); j < arr.size(); j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             cout << arr[i];
    //         }
    //     }
    // }
    //! 3rd Mathod.
    // vector<int> ans(arr.size(), 0);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     ans[arr[i]]++;
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (ans[i] > 1)
    //     {
    //         cout << i;
    //     }
    // }
    //! 4th Method.
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[abs(arr[i])] < 0)
    //     {
    //         cout << abs(arr[i]);
    //         break;
    //     }
    //     else
    //     {
    //         arr[abs(arr[i])] *= -1;
    //     }
    // }
    //! 5th Method.
    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }
    cout << arr[0];
}

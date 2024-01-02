// 1. Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> TwoSum(vector<int> arr, int target)
{
    //! 1st Method.
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = (i + 1); j < arr.size(); j++)
    //     {
    //         if (arr[i] + arr[j] == target)
    //         {
    //             return {i, j};
    //         }
    //     }
    // }
    // return {-1, -1};

    //! 2nd Method.
    unordered_map<int, int> hash;
    for (int i = 0; i < arr.size(); i++)
    {
        int num = target - arr[i];
        if (hash.find(num) != hash.end())
        {
            return {hash.at(num), i};
        }

        hash.insert({arr[i], i});
    }
    return {-1, -1};
}
int main()
{
    vector<int> arr{45, 34, 11, 78, 0, -9, 70, 18, 4, 6, 7, 9};
    int target = 10;
    vector<int> ans = TwoSum(arr, target);
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
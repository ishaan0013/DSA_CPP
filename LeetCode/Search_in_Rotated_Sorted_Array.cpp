// 33. Search in Rotated Sorted Array

// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
// You must write an algorithm with O(log n) runtime complexity.

//  Example 1:
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

// Example 2:
// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> arr, int flag, int start, int end)
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
int Pivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + ((end - start) / 2);
    while (start < end)
    {

        if ((mid + 1) <= arr.size() - 1 && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if ((mid - 1) >= 0 && arr[mid - 1] > arr[mid])
        {
            return (mid - 1);
        }
        if (arr[start] >= arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid;
        }
        mid = start + ((end - start) / 2);
    }
    return start;
}
int SearchElement(vector<int> arr, int flag)
{
    int pivot = Pivot(arr);
    int ans;
    if (arr[0] <= flag && arr[pivot] >= flag)
    {
        ans = BinarySearch(arr, flag, 0, pivot);
    }
    else
    {
        ans = BinarySearch(arr, flag, pivot + 1, arr.size() - 1);
    }
    return ans;
}

int main()
{
    vector<int> arr{3, 4, 6, 7, 8, 9, 0, 1, 2};
    int flag = 0;
    cout << "Found at index " << SearchElement(arr, flag);
}
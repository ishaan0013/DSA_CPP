// Given an array arr[] of size n, find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

// Note:- The position you return should be according to 1-based indexing and return -1 if not repeating element found.

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int Repeating(vector<int> arr);
int main()
{
    vector<int> arr{50, 4, 3, 5, 3, 1, 67};
    cout << Repeating(arr);
}
int Repeating(vector<int> arr)
{
    //! 1st Method.
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = (i + 1); j < arr.size(); j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             return (i + 1);
    //         }
    //     }
    // }
    // return -1;
    //! 2nd Method.
    unordered_map<int, int> hash;
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (hash[arr[i]] > 1)
        {
            return (i + 1);
        }
    }
    return -1;
}

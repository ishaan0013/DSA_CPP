// Find missing number in an array with duplicates
// size of array : N
// elements in array: [1,N]
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void FindMissing(vector<int> arr);
int main()
{
    vector<int> arr{1, 2, 3, 3, 4, 6, 7, 8, 9};
    FindMissing(arr);
}

void FindMissing(vector<int> arr)
{
    //! 1st Method.
    //     for (int i = 0; i < arr.size(); i++)
    //     {
    //         if (arr[abs(arr[i]) - 1] > 0)
    //         {
    //             arr[abs(arr[i]) - 1] *= -1;
    //         }
    //     }
    //     for (int i = 0; i < arr.size(); i++)
    //     {
    //         if (arr[i] > 0)
    //         {
    //             cout << (i + 1);
    //             break;
    //         }
    //     }
    //! 2nd Method.
    int i = 0;
    while (i < arr.size())
    {
        int idx = arr[i] - 1;
        if (arr[i] != arr[idx])
        {
            swap(arr[i], arr[idx]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (i + 1 != arr[i])
        {
            cout << i + 1;
            break;
        }
    }
}
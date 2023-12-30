// Given two array A[0….N-1] and B[0….M-1] of size N and M respectively, representing two numbers such that every element of arrays represent a digit. For example, A[] = { 1, 2, 3} and B[] = { 2, 1, 4 } represent 123 and 214 respectively. The task is to find the sum of both the numbers.

// Example :
// Input : A[] = {1, 2}, B[] = {2, 1}
// Output : 33
// Explanation:
// N=2, and A[]={1,2}
// M=2, and B[]={2,1}
// Number represented by first array is 12.
// Number represented by second array is 21
// Sum=12+21=33

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void Sum(vector<int> arr, vector<int> brr)
{
    vector<int> ans;
    int carry = 0;
    int arr_size = arr.size() - 1;
    int brr_size = brr.size() - 1;

    while (arr_size >= 0 && brr_size >= 0)
    {
        int sum = 0;
        sum = (arr[arr_size] + brr[brr_size] + carry) % 10;
        carry = (arr[arr_size] + brr[brr_size] + carry) / 10;
        ans.push_back(sum);
        arr_size--;
        brr_size--;
    }
    while (arr_size >= 0)
    {
        int sum = 0;
        sum = (arr[arr_size] + 0 + carry) % 10;
        carry = (arr[arr_size] + 0 + carry) / 10;
        ans.push_back(sum);
        arr_size--;
    }
    while (brr_size >= 0)
    {
        int sum = 0;
        sum = (0 + brr[brr_size] + carry) % 10;
        carry = (0 + brr[brr_size] + carry) / 10;
        ans.push_back(sum);

        brr_size--;
    }
    if (carry != 0)
    {
        ans.push_back(carry);
    }

    reverse(ans.begin(), ans.end());
    for (auto i : ans)
    {
        cout << i;
    }
}
int main()
{

    vector<int> arr{9, 9};
    vector<int> brr{9, 6, 9, 9, 9};
    Sum(arr, brr);
}
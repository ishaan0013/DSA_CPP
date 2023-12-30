// Given an integer N, find its factorial. return a list of integers denoting the digits that make up the factorial of N.

// Example :
// Input: N = 5
// Output: 120
// Explanation : 5! = 1*2*3*4*5 = 120

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void Factorial(int num)
{
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    for (int i = 2; i <= num; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int sum = ans[j] * i + carry;
            ans[j] = sum % 10;
            carry = sum / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans)
    {
        cout << i;
    }
}
using namespace std;
int main()
{
    int num = 10;
    Factorial(num);
}
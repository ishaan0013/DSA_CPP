// Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
// If there are no such elements return an empty array. In this case the output will be printed as -1.
// Note: can you take care of the duplicates without using any additional Data Structure?

// Input:
// n1 = 6; A = {1, 5, 10, 20, 40, 80}
// n2 = 5; B = {6, 7, 20, 80, 100}
// n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
// Output: 20 80
// Explanation: 20 and 80 are the only
// common elements in A, B and C.
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void Common(vector<int> a1, vector<int> a2, vector<int> a3);
int main()
{
    vector<int> a1{1, 5, 10, 20, 20, 40, 80, 90};
    vector<int> a2{5, 6, 7, 8, 20, 20, 80, 90, 100};
    vector<int> a3{3, 4, 15, 20, 20, 30, 70, 80, 90, 120};
    Common(a1, a2, a3);
}

void Common(vector<int> a1, vector<int> a2, vector<int> a3)
{
    int a = 0, b = 0, c = 0;
    int s1 = a1.size(), s2 = a2.size(), s3 = a3.size();
    vector<int> ans;
    set<int> set1;
    while (a < s1 && b < s2 && c < s3)
    {
        if (a1[a] == a2[b] && a2[b] == a3[c])
        {
            set1.insert(a1[a]);
            a++;
            b++;
            c++;
        }
        else if (a1[a] < a2[b] || a1[a] < a3[c])
        {
            a++;
        }
        else if (a2[b] < a3[c] || a2[b] < a1[a])
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    for (auto i : set1)
    {
        ans.push_back(i);
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
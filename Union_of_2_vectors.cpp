#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>
using namespace std;
void Union(vector<int> arr, vector<int> brr)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        ans.push_back(brr[i]);
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    cout << "Union of array is: { ";

    for (auto values : ans)
    {
        cout << values << " ";
    }
    cout << "}";
}
int main()
{
    int a, b;
    cout << "Enter size of First Array:\n";
    cin >> a;
    vector<int> arr(a);
    cout << "Enter the elements of first array:\n";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter size of Second Array:\n";
    cin >> b;
    vector<int> brr(b);
    cout << "Enter the elements of Second array:\n";
    for (int i = 0; i < b; i++)
    {
        cin >> brr[i];
    }
    Union(arr, brr);
}
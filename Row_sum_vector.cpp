#include <iostream>
#include <vector>
using namespace std;
void Sum(vector<vector<int>> arr)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < arr[0].size(); j++)
        {
            sum = arr[i][j] + sum;
        }
        ans.push_back(sum);
    }
    for (auto v : ans)
    {
        cout << v << " ";
    }
}
int main()
{
    vector<vector<int>> arr{{1, 2, 3}, {4, 5, 7}, {4, 8, 9}, {0, 9, 8}};
    Sum(arr);
}
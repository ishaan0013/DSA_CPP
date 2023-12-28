// 54. Spiral Matrix
// Given an (m x n) matrix, return all elements of the matrix in spiral order.

#include <iostream>
#include <vector>
using namespace std;
void Spiral(vector<vector<int>> arr)
{
    vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();
    int total = row * col;
    int count = 0;
    int srow = 0;
    int rcol = col - 1;
    int erow = row - 1;
    int lcol = 0;
    while (count < total)
    {
        // above row
        for (int i = lcol; i <= rcol && count < total; i++)
        {
            ans.push_back(arr[srow][i]);
            count++;
        }
        srow++;

        // right column
        for (int i = srow; i <= erow && count < total; i++)
        {
            ans.push_back(arr[i][rcol]);
            count++;
        }
        rcol--;

        // bottom row
        for (int i = rcol; i >= lcol && count < total; i--)
        {
            ans.push_back(arr[erow][i]);
            count++;
        }
        erow--;

        // left column
        for (int i = erow; i >= srow && count < total; i--)
        {
            ans.push_back(arr[i][lcol]);
            count++;
        }
        lcol++;
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<vector<int>> arr{{1, 5, 6, 7, 5},
                            {5, 6, 8, 3, 3},
                            {5, 8, 0, 2, 8},
                            {3, 7, 8, 9, 9}};
    Spiral(arr);
}
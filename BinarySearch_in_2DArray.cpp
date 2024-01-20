#include <iostream>
#include <vector>
using namespace std;
vector<int> BinarySearch(vector<vector<int>> arr, int flag)
{
    int row = arr.size();
    int col = arr[0].size();
    int start = 0;
    int end = (row * col) - 1;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        int mid_row_idx = mid / col;
        int mid_col_idx = mid % col;
        if (arr[mid_row_idx][mid_col_idx] == flag)
        {
            return {mid_row_idx, mid_col_idx};
        }
        else if (arr[mid_row_idx][mid_col_idx] > flag)
        {
            end = end - 1;
        }
        else
        {
            start = start + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return {-1, -1};
}
int main()
{
    vector<vector<int>> arr{{0, 1, 2, 3, 4, 5},
                            {6, 7, 8, 9, 10, 11},
                            {12, 13, 14, 15, 16, 17},
                            {18, 19, 20, 21, 22, 23},
                            {24, 25, 26, 27, 28, 29}};
    int flag = 28;
    vector<int> ans = BinarySearch(arr, flag);
    cout << "Item found at Row: " << ans[0] << " and Column: " << ans[1];
}
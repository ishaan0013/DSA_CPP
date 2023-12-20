#include <iostream>
#include <vector>
using namespace std;
void Transpose(vector<vector<int>> arr)
{
    vector<vector<int>> ans(arr[0].size(), (vector<int>(arr.size())));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            ans[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> arr{{1, 5, 6}, {7, 8, 9}, {3, 4, 5}, {67, 89, 45}};
    Transpose(arr);
}
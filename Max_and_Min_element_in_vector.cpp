#include <iostream>
#include <vector>
using namespace std;
void MaxMin(vector<vector<int>> arr)
{
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout << "max number is: " << max << " and min number is: " << min;
}
int main()
{
    vector<vector<int>> arr{{1, 2, 3}, {4, 8, 9}, {0, 9, 8}, {-100, 0, 100}, {4, 5, 7}};
    MaxMin(arr);
}
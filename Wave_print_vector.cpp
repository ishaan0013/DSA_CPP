#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void Wave(int row, int col, int arr[4][4])
{
    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 0)
        {
            // top-to-bottom
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            // bottom-to-top
            for (int a = row - 1; a >= 0; a--)
            {
                cout << arr[a][i] << " ";
            }
        }
    }
}
int main()
{
    int row = 4, col = 4;
    int arr[4][4] = {{1, 2, 3, 6},
                     {4, 5, 6, 3},
                     {7, 8, 9, 6},
                     {34, 56, 78, 12}};
    Wave(row, col, arr);
}
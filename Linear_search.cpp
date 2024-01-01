#include <iostream>
#include <vector>
using namespace std;
int Search(vector<int> arr, int target)
{

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{45, 67, 98, 0, 3, 5, 7, 8, 9, -4, -6, -8, -1};
    int target = 9;

    cout << "target found at index " << Search(arr, target);
}
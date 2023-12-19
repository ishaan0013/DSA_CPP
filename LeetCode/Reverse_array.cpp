#include <iostream>
using namespace std;

int main()
{
    int arr[11] = {1, 2, 43, 5, 7, 8, 56, 3, 6, 90, 100};
    int first = 0, last = (sizeof(arr) / sizeof(int)) - 1;
    while (first < last)
    {
        arr[last] = arr[first] + arr[last];
        arr[first] = arr[last] - arr[first];
        arr[last] = arr[last] - arr[first];
        first++;
        last--;
    }
    for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        cout << arr[i] << " ";
    }
}
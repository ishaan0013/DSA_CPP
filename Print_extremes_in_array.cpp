#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {186, 79, 36, 790, 35, 3, 9, 0, 34, 55};
    int first = 0, last = (sizeof(arr) / sizeof(int)) - 1;
    while (first < last)
    {
        cout << arr[first] << " " << arr[last] << " ";
        first++;
        last--;
    }
}
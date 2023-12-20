#include <iostream>
#include <vector>
using namespace std;
void Intersection(vector<int> arr, vector<int> brr)
{
    vector<int> ans;
    int a = 0, b = 0;
    int size;
    (arr.size() > brr.size()) ? size = brr.size() : size = arr.size();

    while (a < size || b < size)
    {
        if (arr[a] == brr[b])
        {
            ans.push_back(arr[a]);
            a++;
            b++;
        }
        else if (arr[a] > brr[b])
        {
            b++;
        }
        else
        {
            a++;
        }
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> arr{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> brr{1, 1, 2, 5, 7, 7, 8, 9};
    Intersection(arr, brr);
}

#include <iostream>
#include <vector>
using namespace std;
int Unique(vector<int> brr)
{
    int ans = brr[0];
    for (int i = 1; i < brr.size(); i++)
    {
        ans = ans ^ brr[i];
    }
    return ans;
}
int main()
{
    int a, ans;
    cout << "Enter size of array:\n";
    cin >> a;
    vector<int> arr(a);
    cout << "Enter elements:\n";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    ans = Unique(arr);
    cout << "Unique Element is: " << ans;
}
#include <iostream>
#include <vector>
using namespace std;
void Pair_sum(vector<int> arr, vector<int> brr, int sum)
{

    int flag = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] + brr[j] == sum)
            {
                cout << "sum is at " << i << "'th index of first array and " << j << "'th index of second array which is " << arr[i] << " and " << brr[j];
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 0)
    {
        cout << "No element found.";
    }
}
int main()
{
    int a, b, sum;
    cout << "Enter the value of sum:\n";
    cin >> sum;
    cout << "Enter size of First Array:\n";
    cin >> a;
    vector<int> arr(a);
    cout << "Enter the elements of first array:\n";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter size of Second Array:\n";
    cin >> b;
    vector<int> brr(b);
    cout << "Enter the elements of Second array:\n";
    for (int i = 0; i < b; i++)
    {
        cin >> brr[i];
    }
    Pair_sum(arr, brr, sum);
}
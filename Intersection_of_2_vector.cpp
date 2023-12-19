#include <iostream>
#include <vector>
using namespace std;
void Intersection(vector<int> arr, vector<int> brr)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                ans.push_back(arr[i]);
                break;
            }
        }
    }
    cout << "Intersion array is: { ";
    for (auto values : ans)
    {
        cout << values << " ";
    }
    cout << "}";
}
int main()
{
    int a, b;
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
    Intersection(arr, brr);
}

#include <iostream>
using namespace std;

int Solution(int num, int k)
{
    int a = 1 << k;
    int ans = num | a;
    return ans;
}
int main()
{
    int ans, a, b;
    cout << "Enter Number and the Kth term:\n";
    cin >> a >> b;
    ans = Solution(a, b);
    cout << ans;
}
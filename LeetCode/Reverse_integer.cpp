#include <iostream>
using namespace std;
class Solution
{
public:
    int Reverse(int num)
    {
        bool neg = false;
        if (num <= INT_MIN)
        {
            return 0;
        }
        if (num < 0)
        {
            num = -num;
            neg = true;
        }
        int ans = 0, rem = 0;
        while (num > 0)
        {
            if (num > INT_MAX / 10)
            {
                return 0;
            }
            rem = num % 10;
            ans = (ans * 10) + rem;
            num = num / 10;
        }
        return neg ? -ans : ans;
    }
};

int main()
{
    int a, ans;
    cout << "Enter Number:\n";
    cin >> a;
    Solution obj;
    ans = obj.Reverse(a);
    cout << ans;
}
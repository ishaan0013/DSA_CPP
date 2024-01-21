#include <iostream>
#include <vector>
using namespace std;
int Quotient(int divisor, int divident)
{
    int start = 1;
    int end = divident;
    long int mid = start + ((end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (divisor * mid == divident)
        {
            ans = mid;
            break;
        }
        else if (divisor * mid > divident)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}
int main()
{
    cout << "Enter Divident: ";
    int divident;
    cin >> divident;
    cout << "Enter Divisor: ";
    int divisor;
    cin >> divisor;
    int ans = Quotient(abs(divisor), abs(divident));
    if ((divident * -1 > 0 && divisor * -1 > 0) || (divident * -1 < 0 && divisor * -1 < 0))
    {
        cout << "Quotient is: " << ans;
    }
    else
    {
        cout << "Quotient is: " << ans * -1;
    }
}
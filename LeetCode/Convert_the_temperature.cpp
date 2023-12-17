#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
vector<double> Solution(double num)
{
    vector<double> ans;
    double k = num + 273.15;
    double f = (num * 1.80) + 32.00;
    ans.push_back(k);
    ans.push_back(f);
    return ans;
}

int main()
{
    double a;
    vector<double> ans;
    cout << "Enter temperature in Celsius:\n";
    cin >> setprecision(2) >> a;
    ans = Solution(a);
    cout << "Kelvin: " << fixed << setprecision(5) << ans[0] << "\n";
    cout << "Fahrenheit: " << fixed << setprecision(5) << ans[1] << "\n";
}
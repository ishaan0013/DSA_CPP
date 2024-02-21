// 539. Minimum Time Difference

// Given a list of 24-hour clock time points in "HH:MM" format,return the minimum minutes difference between any two time - points in the list.

// Example 1 :
// Input: timePoints = ["23:59","00:00"]
// Output: 1

// Example 2:
// Input: timePoints = ["00:00","23:59","00:00"]
// Output: 0

#include <iostream>
#include <string.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int findMinDifference(vector<string> &time)
{
    vector<int> mins;

    for (int i = 0; i < time.size(); i++)
    {
        int hr = stoi(time[i].substr(0, 2));
        int min = stoi(time[i].substr(3, 2));
        int ans = (hr * 60) + min;
        mins.push_back(ans);
    }
    sort(mins.begin(), mins.end());

    int ans = INT_MAX;

    for (int i = 0; i < mins.size() - 1; i++)
    {
        int dif = mins[i + 1] - mins[i];
        ans = min(ans, dif);
    }
    int last = (mins[0] + 1440) - mins.back();
    ans = min(ans, last);
    return ans;
}

int main()
{
    vector<string> time{"00:00", "21:59", "00:50", "18:32", "21:44"};
    cout << findMinDifference(time);
}
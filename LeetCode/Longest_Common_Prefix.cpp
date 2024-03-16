// 14. Longest Common Prefix
// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"

// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

#include <iostream>
#include <string>
#include <vector>
using namespace std;
string prefix(vector<string> strs)
{
    string ans;
    int i = 0;
    while (true)
    {
        char currchar = 0;
        for (auto word : strs)
        {
            if (i >= word.length())
            {
                currchar = 0;
                break;
            }
            // If just started
            if (currchar == 0)
            {
                currchar = word[i];
            }

            // If not just started
            else if (currchar != word[i])
            {
                currchar = 0;
                break;
            }
        }
        if (currchar == 0)
            break;
        ans.push_back(currchar);
        i++;
    }
    return ans;
}

int main()
{
    vector<string> strs{"flesh", "flower", "flow", "flight"};
    cout << prefix(strs);
}
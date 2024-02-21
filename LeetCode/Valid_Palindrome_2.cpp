// 680. Valid Palindrome II
// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

// Example 1:
// Input: s = "aba"
// Output: true

// Example 2:
// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.

// Example 3:
// Input: s = "abc"
// Output: false
#include <iostream>
#include <string.h>
using namespace std;

bool pal(string st, int s, int l)
{
    // int s=0;
    // int l=st.length()-1;
    while (s <= l)
    {
        if (st[s] != st[l])
        {
            return false;
        }
        s++;
        l--;
    }
    return true;
}
bool validPalindrome(string s)
{
    int start = 0;
    int last = s.length() - 1;

    while (start <= last)
    {
        if (s[start] == s[last])
        {
            start++;
            last--;
        }
        else
        {
            return pal(s, start, last - 1) || pal(s, start + 1, last);
            //     string s1 = s;
            //     s1.erase(start, 1);
            //     if (pal(s1) == true) {
            //         return true;
            //     } else {
            //         s.erase(last, 1);
            //         return pal(s);
            //     }
            // }
        }
    }
    return true;
}

int main()
{
    string s = "eedfgfadee";
    cout << validPalindrome(s);
}
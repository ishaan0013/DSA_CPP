// 242. Valid Anagram
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true

// Example 2:
// Input: s = "rat", t = "car"
// Output: false
#include <iostream>
#include <string>
using namespace std;
bool isAnagram(string s, string t)
{
    // 1st Method (using Map)

    // if (s.length() != t.length()) {
    //     return false;
    // }
    // map<int, int> first;
    // map<int, int> second;
    // for (int i = 0; i < s.length(); i++) {
    //     first[s[i]]++;
    // }
    // for (int i = 0; i < s.length(); i++) {
    //     second[t[i]]++;
    // }
    // if (first == second)
    //     return true;
    // else
    //     return false;

    // 2nd Method (Sorting)

    // sort(s.begin(), s.end());
    // sort(t.begin(), t.end());
    // if (s == t)
    //     return true;
    // else
    //     return false;

    // 3rd Method

    if (s.length() != t.length())
        return false;
    int hash[256] = {0};
    for (int i = 0; i < s.length(); i++)
        hash[s[i]]++;
    for (int i = 0; i < t.length(); i++)
        hash[t[i]]--;
    for (int i = 0; i < 256; i++)
    {
        if (hash[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    string s = "anagram";
    string t = "nagamar";
    cout << boolalpha << isAnagram(s, t);
}
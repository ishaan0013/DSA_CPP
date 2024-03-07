// You have N books, each with A[i] number of pages. M students need to be allocated contiguous books, with each student getting at least one book.
// Out of all the permutations, the goal is to find the permutation where the sum of maximum number of pages in a book allotted to a student should be minimum, out of all possible permutations.

// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

// Example 1:

// Input:
// N = 4
// A[] = {12,34,67,90}
// M = 2
// Output:113
// Explanation:Allocation can be done in
// following ways:
// {12} and {34, 67, 90} Maximum Pages = 191
// {12, 34} and {67, 90} Maximum Pages = 157
// {12, 34, 67} and {90} Maximum Pages =113.
// Therefore, the minimum of these cases is 113,
// which is selected as the output.

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
bool isPossible(vector<int> pages, int N, int M, int mid)
{
    int sum = 0;
    int count = 1;
    for (int i = 0; i < N; i++)
    {
        if (pages[i] > mid)
        {
            return false;
        }
        if (sum + pages[i] > mid)
        {
            count++;
            sum = pages[i];
            if (count > M)
            {
                return false;
            }
        }
        else
        {
            sum += pages[i];
        }
    }
    return true;
}
int findPages(vector<int> &pages, int N, int M)
{
    if (N < M)
        return -1;
    int start = 0;
    int end = accumulate(pages.begin(), pages.end(), 0);
    int finalAns;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (isPossible(pages, N, M, mid))
        {
            finalAns = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return finalAns;
}
int main()
{
    int N = 4, M = 2;
    vector<int> pages{12, 34, 67, 90};
    cout << findPages(pages, N, M);
}
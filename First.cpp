#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long int Counting(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        int a;
        a = Counting(n - 1);
        return (n * a);
    }
}

int main()
{
    cout << "enter number";
    long int a, b;
    cin >> a;
    b = Counting(a);
    cout << b;
}

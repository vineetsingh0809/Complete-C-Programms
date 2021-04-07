#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum = 0, curr = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        sum = sum + curr;
        curr = curr + 2;
    }
    return sum;
}
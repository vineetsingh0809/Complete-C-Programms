#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int n = num;
    int ans = 0;
    int temp = 0;

    while (num > 0)
    {
        temp = num % 10;
        ans = (ans * 10) + temp;
        num = num / 10;
    }

    if (n == ans)
    {
        cout << "Given number is a palindrome number\n";
    }
    else
    {
        cout << "Given number is not a palindrome number\n";
    }

    return 0;
}
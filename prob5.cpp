#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    string str;

    if (n == 0)
    {
        cout << "0\n";
    }

    while (n > 0)
    {
        ans = n % 3;
        n = n / 3;
        str += to_string(ans);
    }
    reverse(str.begin(), str.end());
    cout << str << "\n";
}
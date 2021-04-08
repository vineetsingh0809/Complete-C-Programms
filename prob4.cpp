#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string ans = "";
    int counter = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i + 1])
        {
            counter++;
        }
        else
        {
            counter++;
            ans += to_string(counter) + str[i];
            counter = 0;
        }
    }
    cout << ans << "\n";
    return 0;
}
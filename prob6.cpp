int solve(string s)
{
    int counter = 0;
    int maxx = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            if (i == 0)
                counter++;

            counter++;
            maxx = max(maxx, counter);
        }
        else
        {
            counter = 1;
            maxx = max(maxx, counter);
        }
    }
    return maxx;
}
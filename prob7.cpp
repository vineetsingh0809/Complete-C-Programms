int solve(vector<int> &prices, int k)
{
    int n = prices.size();
    int counter = 0;
    int sum = 0;
    sort(prices.begin(), prices.end());
    for (int i = 0; i < n; i++)
    {
        if (prices[i] <= k && sum <= k)
        {
            counter++;
            sum = sum + prices[i];
        }
    }
    return counter;
}
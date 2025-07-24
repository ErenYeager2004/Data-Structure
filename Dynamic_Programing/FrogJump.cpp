#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static int getMinJump(int n, vector<int> &height)
    {
        if (n == 0)
            return n;
        int lft = getMinJump(n - 1, height) + abs(height[n] - height[n - 1]);
        int rgt = INT_MAX;
        if (n > 1)
            rgt = getMinJump(n - 2, height) + abs(height[n] - height[n - 2]);

        return min(lft, rgt);
    }

    // using dp array..
    static int getMinJump2(int n, vector<int> &arr, vector<int> &dp)
    {
        if (n == 0)
            return n;
        if (dp[n] != -1)
            return dp[n];

        int lft = getMinJump2(n - 1, arr, dp) + abs(arr[n] - arr[n - 1]);
        int right = INT_MAX;
        if (n > 1)
            right = getMinJump2(n - 2, arr, dp) + abs(arr[n] - arr[n - 2]);

        return dp[n] = min(lft, right);
    }

    // using tabulation
    static int getMinJump3(int n, vector<int> &arr)
    {
        vector<int> dp(n, 0);
        dp[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            int lft = dp[i - 1] + abs(arr[i] - arr[i - 1]);
            int rgt = INT_MAX;
            if (i > 1)
                rgt = dp[i - 2] + abs(arr[i] - arr[i - 2]);
            dp[i] = min(lft, rgt);
        }
        return dp[n];
    }
};

int main()
{
    vector<int> height = {30, 10, 60, 10};
    int ans = Solution::getMinJump(height.size() - 1, height);
    cout << ans << endl;
    vector<int> dp(height.size() + 1, -1);
    cout << Solution::getMinJump2(height.size() - 1, height, dp) << endl;
    cout << Solution::getMinJump3(height.size() - 1, height) << endl;
}
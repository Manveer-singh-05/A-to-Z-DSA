#include <bits/stdc++.h>
using namespace std;

int solve(string &s1, string &s2, int n, int m, int count,
          vector<vector<vector<int>>> &dp) {

    if (n == 0 || m == 0)
        return count;

    if (dp[n][m][count] != -1)
        return dp[n][m][count];

    int ans = count;

    if (s1[n - 1] == s2[m - 1]) {
        ans = solve(s1, s2, n - 1, m - 1, count + 1, dp);
    }

    int op1 = solve(s1, s2, n - 1, m, 0, dp);
    int op2 = solve(s1, s2, n, m - 1, 0, dp);

    return dp[n][m][count] = max(ans, max(op1, op2));
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size();
    int m = s2.size();

    vector<vector<vector<int>>> dp(
        n + 1,
        vector<vector<int>>(m + 1,
            vector<int>(min(n, m) + 1, -1)));

    cout << solve(s1, s2, n, m, 0, dp);

    return 0;
}
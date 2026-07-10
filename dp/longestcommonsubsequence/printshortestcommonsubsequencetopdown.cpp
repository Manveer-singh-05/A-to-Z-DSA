#include <bits/stdc++.h>
using namespace std;

int lcs(string &s1, string &s2, int i, int j, vector<vector<int>> &dp) {
    if (i == 0 || j == 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    if (s1[i - 1] == s2[j - 1])
        return dp[i][j] = 1 + lcs(s1, s2, i - 1, j - 1, dp);

    return dp[i][j] = max(lcs(s1, s2, i - 1, j, dp),
                          lcs(s1, s2, i, j - 1, dp));
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    // Fill dp using memoization
    lcs(s1, s2, n, m, dp);

    int i = n, j = m;
    string ans = "";

    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            ans += s1[i - 1];
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1]) {
            ans += s1[i - 1];
            i--;
        }
        else {
            ans += s2[j - 1];
            j--;
        }
    }

    while (i > 0) {
        ans += s1[i - 1];
        i--;
    }

    while (j > 0) {
        ans += s2[j - 1];
        j--;
    }

    reverse(ans.begin(), ans.end());

    cout << ans;

    return 0;
}
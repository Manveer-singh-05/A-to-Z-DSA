#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX - 1;

int minicoinchange(int coins[], int n, int amount, vector<vector<int>> &dp) {
    // Base cases
    if (amount == 0)
        return 0;

    if (n == 0)
        return INF;

    // Memoization
    if (dp[n][amount] != -1)
        return dp[n][amount];

    else if (coins[n - 1] <= amount) {
       return  dp[n][amount] = min(
            1 + minicoinchange(coins, n, amount - coins[n - 1], dp), 
            minicoinchange(coins, n - 1, amount, dp)                 
        );
    } else {
        return   dp[n][amount] = minicoinchange(coins, n - 1, amount, dp);
    }
}

int main() {
    int n;
    cin >> n;

    int coins[n];
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int amount;
    cin >> amount;

    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));

    int ans = minicoinchange(coins, n, amount, dp);

    if (ans == INF)
        cout << -1;
    else
        cout << ans;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int matrixMultiplication(vector<int> &arr) {
        int n = arr.size();

        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Fill the DP table
        for (int i = n - 1; i >= 1; i--) {

            for (int j = i + 1; j < n; j++) {

                int mini = INT_MAX;

                for (int k = i; k < j; k++) {

                    int temp = dp[i][k]
                             + dp[k + 1][j]
                             + arr[i - 1] * arr[k] * arr[j];

                    mini = min(mini, temp);
                }

                dp[i][j] = mini;
            }
        }

        // Print DP table (optional)
        cout << "\nDP Table:\n";
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                cout << dp[i][j] << "\t";
            }
            cout << endl;
        }

        return dp[1][n - 1];
    }
};

int main() {

    int n;
    cout << "Enter number of dimensions: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter dimensions: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;

    cout << "\nMinimum Multiplication Cost = "
         << obj.matrixMultiplication(arr) << endl;

    return 0;
}
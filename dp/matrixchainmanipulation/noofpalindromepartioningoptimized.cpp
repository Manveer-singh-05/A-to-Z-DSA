#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string &s, int i, int j) {
    while (i < j) {
        if (s[i] == s[j]) {
            i++;
            j--;
        } else {
            return false;
        }
    }
    return true;
}

int ispartition(string &s, int i, int j, vector<vector<int>> &t) {

    if (i >= j)
        return 0;

    if (ispalindrome(s, i, j))
        return 0;

    if (t[i][j] != -1)
        return t[i][j];

    int mini = INT_MAX;

    for (int k = i; k < j; k++) {

        int left, right;

        if (t[i][k] != -1)
            left = t[i][k];
        else
            left = ispartition(s, i, k, t);

        if (t[k + 1][j] != -1)
            right = t[k + 1][j];
        else
            right = ispartition(s, k + 1, j, t);

        int temp = left + right + 1;
        mini = min(mini, temp);
    }

    return t[i][j] = mini;
}

int main() {
    string s;
    cin >> s;

    int n = s.size();

    vector<vector<int>> t(n, vector<int>(n, -1));

    cout << ispartition(s, 0, n - 1, t);

    return 0;
}
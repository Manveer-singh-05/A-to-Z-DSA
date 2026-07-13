#include <bits/stdc++.h>
using namespace std;

int maxi = 0;
int endIndex = 0;

int printlps(string &s1, string &s2, int n, int m, vector<vector<int>> &k) {

    if (n == 0 || m == 0)
        return 0;

    if (k[n][m] != -1)
        return k[n][m];

    // Visit all states
    printlps(s1, s2, n - 1, m, k);
    printlps(s1, s2, n, m - 1, k);

    if (s1[n - 1] == s2[m - 1]) {

        k[n][m] = 1 + printlps(s1, s2, n - 1, m - 1, k);

        int len = k[n][m];
        int start1 = n - len;
        int start2 = s1.size() - m;

        if (start1 == start2 && len > maxi) {
            maxi = len;
            endIndex = n;
        }
    }
    else {
        k[n][m] = 0;
    }

    return k[n][m];
}

int main() {

    string s1;
    cin >> s1;

    string s2 = s1;
    reverse(s2.begin(), s2.end());

    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> k(n + 1, vector<int>(m + 1, -1));

    printlps(s1, s2, n, m, k);

    cout << s1.substr(endIndex - maxi, maxi);

    return 0;
}
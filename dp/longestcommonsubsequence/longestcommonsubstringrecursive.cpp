#include <bits/stdc++.h>
using namespace std;

int substring(string &s1, string &s2, int n, int m, int count) {
    if (n == 0 || m == 0)
        return count;

    if (s1[n - 1] == s2[m - 1]) {
        count = substring(s1, s2, n - 1, m - 1, count + 1);
    }

    int op1 = substring(s1, s2, n - 1, m, 0);
    int op2 = substring(s1, s2, n, m - 1, 0);

    return max(count, max(op1, op2));
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    cout << substring(s1, s2, s1.size(), s2.size(), 0);
}
#include <bits/stdc++.h>
using namespace std;

string scs(string &s1, string &s2, int n, int m) {
    if (n == 0)
        return s2.substr(0, m);

    if (m == 0)
        return s1.substr(0, n);

    if (s1[n - 1] == s2[m - 1]) {
        return scs(s1, s2, n - 1, m - 1) + s1[n - 1];
    }

    string op1 = scs(s1, s2, n - 1, m) + s1[n - 1];
    string op2 = scs(s1, s2, n, m - 1) + s2[m - 1];

    if (op1.length() < op2.length())
        return op1;
    else
        return op2;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    cout << scs(s1, s2, s1.size(), s2.size());

    return 0;
}
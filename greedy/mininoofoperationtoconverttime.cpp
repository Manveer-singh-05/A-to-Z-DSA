#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int convertTime(string current, string correct) {

        int currentHour =
            (current[0] - '0') * 10 +
            (current[1] - '0');

        int currentMin =
            (current[3] - '0') * 10 +
            (current[4] - '0');

        int correctHour =
            (correct[0] - '0') * 10 +
            (correct[1] - '0');

        int correctMin =
            (correct[3] - '0') * 10 +
            (correct[4] - '0');

        int totalCurrent = currentHour * 60 + currentMin;
        int totalCorrect = correctHour * 60 + correctMin;

        int diff = totalCorrect - totalCurrent;

        vector<int> ops = {60, 15, 5, 1};

        int ans = 0;

        for (int x : ops) {
            ans += diff / x;
            diff %= x;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    string current, correct;

    cout << "Enter current time (HH:MM): ";
    cin >> current;

    cout << "Enter correct time (HH:MM): ";
    cin >> correct;

    int result = obj.convertTime(current, correct);

    cout << "Minimum operations needed = " << result << endl;

    return 0;
}
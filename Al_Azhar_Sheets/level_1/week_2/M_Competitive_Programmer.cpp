#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/**
 * @brief Checks if a given number (as a string) is divisible by 60.
 *
 * A number is divisible by 60 if:
 *   - It contains at least one '0' (to be divisible by 10),
 *   - The sum of its digits is divisible by 3 (to be divisible by 3),
 *   - It contains at least two '0's or at least one additional even digit (to be divisible by 2).
 *
 * @param numberStr The number represented as a string.
 * @return true if the number is divisible by 60, false otherwise.
 */
bool isDivisibleBySixty(const string& numberStr) {
    int zeroCount = 0;
    int digitSum = 0;
    bool hasEvenNonZeroDigit = false;

    for (char ch : numberStr) {
        int digit = ch - '0';
        digitSum += digit;

        if (digit == 0) {
            zeroCount++;
        }
        else if (digit % 2 == 0) {
            hasEvenNonZeroDigit = true;
        }
    }

    if (zeroCount >= 1 && digitSum % 3 == 0) {
        if (zeroCount >= 2 || hasEvenNonZeroDigit) {
            return true;
        }
    }
    return false;
}

void solve()
{
    int testCases;
    cin >> testCases;
    string numberStr;

    while (testCases--)
    {
        cin >> numberStr;
        if (isDivisibleBySixty(numberStr)) {
            cout << "red" << endl;
        }
        else {
            cout << "cyan" << endl;
        }
    }
}

int main(void)
{
    fast_io;

    solve();

    return 0;
}
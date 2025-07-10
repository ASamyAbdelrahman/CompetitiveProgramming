#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/**
 * @brief Calculates the sum of all divisors of a given integer n.
 *
 * This function iterates from 1 to sqrt(n), and for each divisor i of n,
 * it adds both i and n/i to the sum (taking care not to double-count when i == n/i).
 *
 * @param n The integer whose divisors' sum is to be calculated.
 * @return The sum of all divisors of n.
 */
ll getSumofDivisors(ll n) {
    ll sum = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    return sum;
}

void solve(void) {
    ll n;
    cin >> n;
    ll sum = getSumofDivisors(n);
    cout << sum << endl;
}

int main(void) {
    fast_io

    solve();

    return 0;
}
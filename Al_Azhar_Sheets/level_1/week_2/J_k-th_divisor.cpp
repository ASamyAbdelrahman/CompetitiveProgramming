#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/**
 * @brief Finds all divisors of a given number n.
 *
 * This function computes and returns a vector containing all positive divisors of the input number n.
 * The divisors are not guaranteed to be in sorted order.
 *
 * @param n The number for which to find divisors.
 * @return std::vector<int> A vector containing all divisors of n.
 */
vector<ll> findDivisors(ll n)
{
    vector<ll> divisors;
    divisors.push_back(1);

    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) divisors.push_back(n / i);
        }
    }

    if (n != 1) divisors.push_back(n);

    return divisors;
}

void solve()
{
    ll num, k;
    cin >> num >> k;
    vector<ll> divisors = findDivisors(num);
    sort(divisors.begin(), divisors.end());

    if (k > 0 && k <= (ll)divisors.size()) {
        cout << divisors[k - 1];
    } else {
        cout << -1;
    }
}

int main()
{
    fast_io;
    solve();
    return 0;
}

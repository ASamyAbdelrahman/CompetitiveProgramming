#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/**
 * @brief Determines if a number is an "almost prime".
 *
 * An "almost prime" is defined as a number that has exactly two distinct prime factors.
 *
 * @param n The number to check.
 * @return true if n has exactly two distinct prime factors, false otherwise.
 */
bool isAlmostPrime(ll n)
{
    vector<int> primeFactors;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            primeFactors.push_back(i);
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        primeFactors.push_back(n);
    }
    if (primeFactors.size() == 2)
    {
        return true;
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    ll count = 0;
    for (ll i = 4; i <= n; i++)
    {
        if (isAlmostPrime(i))
        {
            count++;
        }
    }
    cout << count << endl;
}

int main(void)
{
    fast_io;

    solve();

    return 0;
}
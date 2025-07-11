#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/**
 * @brief Computes and prints the prime factorization of a given integer.
 *
 * This function finds all prime factors of the input number `n` and their respective powers.
 * It prints each prime factor along with its exponent (number of times it divides `n`).
 *
 * @param n The integer to be factorized (should be >= 2).
 */
void getPrimeFactors(ll n)
{
    map<ll, ll> PrimeFact;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            PrimeFact[i]++;
            n /= i;
        }
    }
    if (n != 1)
    {
        PrimeFact[n]++;
    }
    for (auto &[prime, power] : PrimeFact)
    {
        cout << prime << " " << power << endl;
    }
}

void solve()
{
    ll n;
    cin >> n;
    getPrimeFactors(n);
}

int main(void)
{
    fast_io;

    solve();

    return 0;
}

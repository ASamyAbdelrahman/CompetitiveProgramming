#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool is_prime[100005];


void generate_sieve()
{
    memset(is_prime, true, sizeof(is_prime));

    is_prime[0] = is_prime[1] = false;
    for (int i = 4; i <= 100005; i += 2)
        is_prime[i] = false;

    for (int i = 3; i <= 100005; i += 2)
    {
        if (is_prime[i])
        {
            for (int j = i * 2; j <= 100005; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

/**
 * @brief Solves the "Sherlock and his girlfriend" problem.
 *
 * Reads an integer n from standard input, generates a sieve of primes up to n+1,
 * and counts the number of primes and composites in the range [2, n+1].
 * Outputs either "1" or "2" depending on whether there are any composites,
 * followed by a sequence where each number in [2, n+1] is labeled "1" if prime,
 * or "2" if composite.
 *
 * Input:
 * - Integer n
 *
 * Output:
 * - A single integer ("1" or "2") on the first line.
 * - A sequence of n integers ("1" for prime, "2" for composite) on the second line.
 */
void solve()
{
    ll n;
    cin >> n;

    generate_sieve();

    ll prime_count = 0, composite_count = 0;
    for (ll i = 2; i <= n + 1; i++)
    {
        if (is_prime[i])
            prime_count++;
        else
            composite_count++;
    }

    if (composite_count == 0)
        cout << "1" << endl;
    else
        cout << "2" << endl;

    for (ll i = 2; i <= n + 1; i++)
    {
        if (is_prime[i])
            cout << "1 ";
        else
            cout << "2 ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
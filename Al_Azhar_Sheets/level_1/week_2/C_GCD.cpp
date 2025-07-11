#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll gcd(ll a, ll b)
{
    a = abs(a);
    b = abs(b);
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

/**
 * @brief Reads two integers from standard input, computes their GCD and LCM, and prints them.
 *
 * The function reads two integers `a` and `b`, calculates their greatest common divisor (GCD)
 * using the `gcd` function, then computes their least common multiple (LCM) using the formula:
 *     LCM(a, b) = (a / GCD(a, b)) * b
 * Finally, it outputs the GCD and LCM separated by a space.
 *
 * Input: Two integers `a` and `b` from standard input.
 * Output: Prints the GCD and LCM of `a` and `b` to standard output.
 */
void solve()
{
    ll a, b;
    cin >> a >> b;

    ll n = gcd(a, b);
    ll lcm = (a / n) * b;

    cout << n << ' ' << lcm << '\n';
}

int main(void)
{
    fast_io;

    solve();

    return 0;
}
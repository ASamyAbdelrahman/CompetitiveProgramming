#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/**
 * @brief Calculates the product of all integers in the range [l, r] modulo mod.
 *
 * This function computes the product of all integers from l to r (inclusive),
 * and returns the result modulo mod.
 *
 * @param l The starting integer of the range.
 * @param r The ending integer of the range.
 * @param mod The modulus to apply to the product.
 * @return The product of all integers from l to r, modulo mod.
 */
ll getProduct(int l, int r, int mod)
{
    ll product = 1;
    for (int i = l; i <= r; i++)
    {
        product = (product * i) % mod;
    }
    return product;
}

void solve(void)
{
    int l, r, mod;
    cin >> l >> r >> mod;
    ll product = getProduct(l, r, mod);
    cout << product << endl;
}

int main(void)
{
    fast_io;
    
    solve();

    return 0;
}
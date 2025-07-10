#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/**
 * @brief Checks if a given number is a prime number.
 * 
 * This function determines whether the input integer n is a prime number.
 * It returns true if n is prime, and false otherwise.
 * 
 * @param n The number to check for primality.
 * @return true if n is a prime number, false otherwise.
 */
bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 2) return true;
    if (n % 2 == 0) return false;
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;
    if (isPrime(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    fast_io
    
    solve();

    return 0;
}
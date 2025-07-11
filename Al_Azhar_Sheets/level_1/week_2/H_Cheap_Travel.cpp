#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


/**
 * @brief Calculates the minimum cost to buy n tickets, given two ticket options.
 *
 * There are two types of tickets:
 *  - Single ticket: costs 'a' per ride.
 *  - Special ticket: costs 'b' for 'm' rides.
 *
 * The function computes the minimum total cost to buy exactly 'n' rides,
 * considering all possible combinations of single and special tickets.
 *
 * @param n The total number of rides needed.
 * @param m The number of rides covered by a special ticket.
 * @param a The cost of a single ride ticket.
 * @param b The cost of a special ticket for 'm' rides.
 * @return The minimum total cost to buy exactly 'n' rides.
 */
int getMinimumSum(int n, int m, int a, int b)
{
    int cost_single = n * a;
    int cost_special = ((n + m - 1) / m) * b;
    int cost_combined = (n / m) * b + (n % m) * a;

    return min({cost_single, cost_special, cost_combined});
}

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    int minimumSum = getMinimumSum(n, m, a, b);
    cout << minimumSum << endl;
}

int main(void)
{
    fast_io;

    solve();

    return 0;
}
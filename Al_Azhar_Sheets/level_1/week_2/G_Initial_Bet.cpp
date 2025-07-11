#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


/**
 * @brief Reads the bets of 5 players, calculates their total, and determines the initial bet.
 *
 * This function reads 5 integer values from standard input, each representing a player's bet.
 * It calculates the sum of these bets. If the sum is positive and divisible by 5, it returns
 * the average bet (i.e., the initial bet each player must have made). Otherwise, it returns -1.
 *
 * @return int The initial bet if possible, otherwise -1.
 */
int getInitialBet()
{
    vector<int> players(5, 0);
    int sum_at_the_end = 0;
    
    for (int i = 0; i < 5; i++)
    {
        cin >> players[i];
        sum_at_the_end += players[i];
    }

    if (sum_at_the_end > 0 && sum_at_the_end % 5 == 0)
    {
        return sum_at_the_end / 5;
    }
    return -1;
}

void solve()
{
  int b = getInitialBet();
  cout << b << endl;
}

int main(void)
{
    fast_io;

    solve();

    return 0;
}
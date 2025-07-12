#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/**
 * @brief Calculates the minimum number of hours required to water the entire garden using available buckets.
 *
 * Given the total garden length and a list of bucket segment lengths, this function determines the minimum
 * number of hours needed to water the garden such that the garden can be evenly divided by the length of a bucket's segment.
 * Each bucket can water a segment of the garden in one hour. Only buckets whose segment length divides the garden length exactly are considered.
 *
 * @param number_of_buckets The total number of available buckets.
 * @param garden_length The total length of the garden to be watered.
 * @param segments_length A vector containing the length of each bucket's segment.
 * @return The minimum number of hours required to water the garden, or INT_MAX if no bucket can evenly divide the garden length.
 */
int get_minium_hours(int number_of_buckets, int garden_length, vector<int> &segments_length)
{
    int minium_hour = INT_MAX;
    for (int i = 0; i < number_of_buckets; i++)
    {
        if (garden_length % segments_length[i] == 0)
        {
            minium_hour = min(minium_hour, garden_length / segments_length[i]);
        }
    }
    return minium_hour;
}

void solve()
{
    int number_of_buckets, garden_length;
    cin >> number_of_buckets >> garden_length;

    vector<int> segments_length(number_of_buckets, 0);

    for (int i = 0; i < number_of_buckets; i++)
    {
        cin >> segments_length[i];
    }

    int minium_hours = get_minium_hours(number_of_buckets, garden_length, segments_length);
    cout << minium_hours;
}

int main(void)
{
    fast_io;

    solve();

    return 0;
}
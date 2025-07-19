#include <bits/stdc++.h>
using namespace std;

vector<int> findDivisors(int number) 
{
    vector<int> divisors;
    for (int i = 1; i * i <= number; ++i) 
    {
        if (number % i == 0) 
        {
            divisors.push_back(i);
            if (i != number / i) 
            {
                divisors.push_back(number / i);
            }
        }
    }
    return divisors;
}

/**
 * @brief Solves the problem of finding two integers x and y given a list of divisors.
 * 
 * Reads a list of divisors from input, determines the largest integer x such that all its divisors are present in the list,
 * and then finds the largest integer y (other than x) whose divisors are also present, accounting for possible duplicates.
 * 
 * The function prints x and y separated by a space.
 * 
 * Input:
 * - An integer divisorCount representing the number of divisors.
 * - A list of divisorCount integers representing the divisors.
 * 
 * Output:
 * - Two integers x and y, where x is the largest integer whose divisors are in the input list,
 *   and y is the next largest integer whose divisors (excluding those already counted for x) are in the list.
 */
void solve() 
{
    int divisorCount;
    cin >> divisorCount;
    
    vector<int> inputDivisors(divisorCount);
    unordered_map<int, int> divisorFrequency;
    
    for (int &divisor : inputDivisors) 
    {
        cin >> divisor;
        divisorFrequency[divisor]++;
    }

    sort(inputDivisors.begin(), inputDivisors.end());
    int x = inputDivisors.back();

    vector<int> xList = findDivisors(x);

    for (int divisor : xList) 
    {
        divisorFrequency[divisor]--;
    }

    int y = 0;
    for (const auto &entry : divisorFrequency) 
    {
        if (entry.second > 0) 
        {
            y = max(y, entry.first);
        }
    }

    cout << x << " " << y << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

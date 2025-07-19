#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Computes the power of a base raised to an exponent using fast exponentiation.
 *
 * This function calculates base^exponent efficiently using the binary exponentiation method.
 * Note: This implementation does not handle modular arithmetic and may overflow for large values.
 *
 * @param base The base integer.
 * @param exponent The exponent integer (should be non-negative).
 * @return The result of base raised to the power of exponent.
 */
int fastPower(int base, int exponent)
{
    int result = 1;

    while (exponent)
    {
        if (exponent & 1)
        {
            result *= base;
            exponent--;
        }
        else
        {
            base *= base;
            exponent /= 2;
        }
    }
    return result;
}

void solve()
{
    int exponent, number;
    cin >> exponent >> number;
    
    if (exponent >= 30)
    {
        cout << number << endl;
        return;
    }

    int modulus = fastPower(2, exponent);
    cout << number % modulus << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

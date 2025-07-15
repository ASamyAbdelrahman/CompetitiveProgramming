#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

/**
 * @brief Checks if a given number is a perfect square.
 * 
 * This function determines if the provided number is a perfect square
 * by calculating the integer square root and verifying if squaring it returns
 * the original number. It uses long long to handle large numbers.
 * 
 * @param number The number to check
 * @return true if the number is a perfect square, false otherwise
 */
bool isPerfectSquare(long long number)
{
    long long root = static_cast<long long>(sqrt(number));
    return root * root == number;
}

void solve()
{
    long long inputNumber;
    cin >> inputNumber;

    while (inputNumber)
    {
        if (isPerfectSquare(inputNumber))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        cin >> inputNumber;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();
    return 0;
}

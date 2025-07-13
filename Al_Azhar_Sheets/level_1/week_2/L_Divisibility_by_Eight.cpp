#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/**
 * @brief Finds the first substring of length 1, 2, or 3 in the input string that is divisible by 8.
 *
 * This function iterates through all possible substrings of length 1, 2, and 3 in the given input string.
 * It returns the first such substring (in order of appearance) that represents a number divisible by 8.
 * Leading zeros are not allowed for substrings of length 2 or 3, except for the single digit '0'.
 *
 * @param input The input string consisting of digit characters.
 * @return A string representing the first found substring divisible by 8, or an empty string if none exists.
 */
string findDivisibleByEightSubstring(const string &input)
{
    int length = input.length();

    for (int i = 0; i < length; i++)
    {
        int digit1 = input[i] - '0';

        if (digit1 == 0)
        {
            return string(1, input[i]);
        }
        if (digit1 % 8 == 0)
        {
            return string(1, input[i]);
        }

        for (int j = i + 1; j < length; j++)
        {
            int twoDigitNum = (input[i] - '0') * 10 + (input[j] - '0');

            if (input[i] != '0' && twoDigitNum % 8 == 0)
            {
                return string(1, input[i]) + input[j];
            }

            for (int k = j + 1; k < length; k++)
            {
                int threeDigitNum = (input[i] - '0') * 100 + (input[j] - '0') * 10 + (input[k] - '0');

                if (input[i] != '0' && threeDigitNum % 8 == 0)
                {
                    return string(1, input[i]) + input[j] + input[k];
                }
            }
        }
    }
    return "";
}

void processInput()
{
    string input;
    cin >> input;

    string divisibleSubstring = findDivisibleByEightSubstring(input);

    if (divisibleSubstring.empty())
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << divisibleSubstring << endl;
    }
}

int main()
{
    fast_io;
    processInput();
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int count = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
        {
            count++;
        }
    }

    if (count == 3)
    {
        cout << factorial(count) << endl;
    }
    else if (count == 2)
    {
        cout << factorial(count) + 1 << endl;
    }
    else if (count == 1)
    {
        cout << factorial(count) << endl;
    }

    return 0;
}

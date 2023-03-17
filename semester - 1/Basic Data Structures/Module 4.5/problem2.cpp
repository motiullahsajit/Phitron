#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, x, mul = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i % 2 != 0)
        {
            mul *= x;
        }
    }

    cout << mul << "\n";

    return 0;
}
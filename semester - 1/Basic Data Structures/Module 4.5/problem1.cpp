#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, x, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }

    cout << sum << "\n";

    return 0;
}
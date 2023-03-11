#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int l, r;
    string line;

    cin >> l >> r;
    cin >> line;

    char x;

    l = l - 1;
    r = r - 1;

    for (int i = 0; i <= ((r - l) / 2); i++)
    {
        x = line[l + i];
        line[l + i] = line[r - i];
        line[r - i] = x;
    }

    cout << line << "\n";

    return 0;
}
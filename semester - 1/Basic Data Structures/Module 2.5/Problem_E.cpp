#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr;
    arr.resize(n + 1);
    int x;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        arr[x] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != 1)
        {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}
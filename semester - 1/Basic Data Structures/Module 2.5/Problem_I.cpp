#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr;
    arr.resize(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            count++;
        }
        else if (arr[i] != arr[i - 1])
        {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}
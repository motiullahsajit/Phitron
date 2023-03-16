#include <bits/stdc++.h>

using namespace std;

// time complexity  = O(n + n^2) = O(n^2)
// space complexity = O(n)

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    string ans;

    for (int i = 0; i < n; i++)
    {
        ans = "No";
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (arr[i] == arr[j])
                ans = "Yes";
        }

        cout << i << "->" << ans << "\n";
    }

    return 0;
}
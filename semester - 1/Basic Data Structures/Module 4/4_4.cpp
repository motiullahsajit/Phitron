#include <bits/stdc++.h>

using namespace std;

// (n-1)+ (n-2) + (n-3)+ .... +(n-n)
// ((n-1)*n)/2
// (n^2-n)/2
// (n^2/2) - (n/2)

// time complexity  = O(n^2/2) = O(n^2)
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
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                ans = "Yes";
        }

        cout << i << "->" << ans << "\n";
    }

    return 0;
}
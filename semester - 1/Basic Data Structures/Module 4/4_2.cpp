#include <bits/stdc++.h>

using namespace std;

// time complexity  = O(n+1+n+1) = O (2*n + 1) = O (2*n) = O(n)
// space complexity = O(n)

// O(c*n) = O(n)
// O(1*3) = O(1)

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0, mini = arr[0], maxi = arr[0];

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    cout << sum << " " << maxi << " " << mini << endl;

    return 0;
}
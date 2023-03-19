#include <bits/stdc++.h>

using namespace std;

// space complexity O(n)
// time complexity log(n)

int main()
{

    int n, k;

    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int front = 0, rare = n - 1, flag = 0, mid;

    while (front <= rare)
    {
        mid = (front + rare) / 2;

        if (arr[mid] == k)
        {
            flag = 1;
            cout << "Found " << arr[mid] << " in " << mid << "\n";
            break;
        }

        if (arr[mid] < k)
            front = mid + 1;

        if (arr[mid] > k)
            rare = mid - 1;
    }

    if (flag == 0)
        cout << "No found!"
             << "\n";

    return 0;
}
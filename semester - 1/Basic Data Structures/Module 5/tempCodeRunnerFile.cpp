#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;

    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int front = 0, back = n - 1, mid, flag = 0;

    while (front <= back)
    {
        mid = (front + back) / 2;

        if (arr[mid] == k)
        {
            flag = 1;
            cout << k << "Found in " << mid << "\n";
            break;
        }

        if (arr[mid] > k)
            front = mid + 1;
        else
            back = mid - 1;
    }

    if (flag == 0)
        cout << "No found\n";

    return 0;
}
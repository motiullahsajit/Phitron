#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, q, v;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> v;
        int front = 0, back = n - 1, mid, flag = 0;

        while (front <= back)
        {
            mid = (front + back) / 2;

            if (arr[mid] == v)
            {
                flag = 1;
                cout << v << " Found in " << mid << "\n";
                break;
            }

            if (arr[mid] < v)
                front = mid + 1;
            else
                back = mid - 1;
        }

        if (flag == 0)
            cout << "No found\n";
    }

    return 0;
}
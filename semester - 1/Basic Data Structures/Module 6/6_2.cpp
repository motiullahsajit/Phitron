#include <bits/stdc++.h>

using namespace std;

// ((n-1) * n) /2
// time complexity = O(n^2)
// space complexity = O(n)

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
    {
        int index = i;
        while (index >= 1)
        {
            if (arr[index - 1] > arr[index])
            {
                swap(arr[index - 1], arr[index]);
                index--;
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n";

    return 0;
}
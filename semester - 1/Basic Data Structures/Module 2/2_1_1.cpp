#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n], sum = 0, mul = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        mul *= arr[i];
    }

    cout << "sum = " << sum << endl
         << "mul = " << mul << endl;

    return 0;
}
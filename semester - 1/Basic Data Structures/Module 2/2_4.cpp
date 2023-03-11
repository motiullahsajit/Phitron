#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int *x = new int;

    // cin >> *x;
    // cout << x << endl;
    // cout << *x << endl;

    // delete x;

    int n;

    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << arr << endl;

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    delete[] arr;

    return 0;
}
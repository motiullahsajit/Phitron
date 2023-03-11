#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> arr;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cout << "before" << arr.size() << endl;
        arr.push_back(x);
        cout << "after" << arr.size() << endl;
    }

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << endl;

    arr.erase(arr.begin());
    arr.pop_back();
    arr.insert(arr.begin() + 1, 6);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << endl;

    vector<int> a = {1, 2, 3, 4, 5, 6};
    a.resize(3);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << endl;

    return 0;
}
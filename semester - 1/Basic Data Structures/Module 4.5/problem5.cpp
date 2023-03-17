#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, y, v;
    cin >> x;
    vector<int> arr1;

    for (int i = 0; i < x; i++)
    {
        cin >> v;
        arr1.push_back(v);
    }

    cin >> y;

    for (int i = 0; i < x; i++)
    {
        cin >> v;
        arr1.push_back(v);
    }

    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1.size(); j++)
        {
            if (i == j)
                continue;
            if (arr1[i] == arr1[j])
                arr1.erase(arr1.begin() + j);
        }
    }

    for (int i = 0; i < arr1.size(); i++)
        cout << arr1[i] << " ";

    cout << "\n";

    return 0;
}
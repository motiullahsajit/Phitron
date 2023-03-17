#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, y;
    cin >> x;
    vector<int> arr1(x);
    for (int i = 0; i < x; i++)
        cin >> arr1[i];

    cin >> y;
    vector<int> arr2(y);
    for (int i = 0; i < y; i++)
        cin >> arr2[i];

    vector<int> arr3;

    if (x > y)
    {
        for (int i = 0; i < y; i++)
        {

            for (int j = 0; j < x; j++)
            {
                if (arr2[i] == arr1[j])
                    arr3.push_back(arr2[i]);
            }
        }
    }
    else
    {
        for (int i = 0; i < x; i++)
        {

            for (int j = 0; j < y; j++)
            {
                if (arr1[i] == arr2[j])
                    arr3.push_back(arr1[i]);
            }
        }
    }

    for (int i = 0; i < arr3.size(); i++)
        cout << arr3[i] << " ";

    cout << "\n";

    return 0;
}
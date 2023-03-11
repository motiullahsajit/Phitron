#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a = 99, b = 98;
    swap(a, b);

    cout << a << " " << b << endl;

    int mini = min({1, 2, 3, 4, 5});
    int maxi = max({1, 2, 3, 4, 5});

    cout << "mini " << mini << endl;
    cout << "maxi " << maxi << endl;

    vector<int> x = {23, 53, 5, 2, 6, 7};

    for (int i = 0; i < x.size(); i++)
        cout << x[i] << " ";

    cout << endl;

    sort(x.begin(), x.end());

    for (int i = 0; i < x.size(); i++)
        cout << x[i] << " ";

    cout << endl;

    vector<int> y = {2, 5, 4, 3, 8, 7};

    for (int i = 0; i < y.size(); i++)
        cout << y[i] << " ";

    cout << endl;

    sort(y.begin() + 1, y.begin() + 4);

    for (int i = 0; i < y.size(); i++)
        cout << y[i] << " ";

    cout << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{

    for (int i = 0; i < 10; i++)
    {
        if (i == 7)
            continue;
        cout << i << " ";
    }
    cout << endl;

    int k;

    while (1)
    {
        cin >> k;
        if (k == 0)
            break;
        cout << k << endl;
    }

    int l = 5;

    do
    {
        cout << l << endl;
    } while (l < 5);

    return 0;
}
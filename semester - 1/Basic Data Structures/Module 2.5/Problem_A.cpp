#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin >> n;

    cout << n << "\n";

    if (n != 1)
    {
        do
        {
            if (n % 2 == 0)
            {
                n /= 2;
                cout << n << "\n";
            }
            else
            {
                n = n * 3 + 1;
                cout << n << "\n";
            }

        } while (n != 1);
    }

    return 0;
}
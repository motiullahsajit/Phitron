#include <bits/stdc++.h>

using namespace std;

// time complexity o(1)
// space complexity o(1)
// cause inputs are constant

int main()
{

    int a, b, c;

    cin >> a >> b >> c;

    int maxi, mini, sum, mul;

    maxi = max({a, b, c});
    mini = min({a, b, c});
    sum = a + b + c;
    mul = a * b * c;

    cout << maxi << "\n";
    cout << mini << "\n";
    cout << sum << "\n";
    cout << mul << "\n";

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

// time complexity = O(2^n)
// space complexity = O(n)

// if ans is saved
// time complexity = O(n)
// space complexity = O(n)

int called = 0;

int ans[100];

int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (ans[n] != 0)
        return ans[n];
    int x = fibo(n - 1);
    called++;
    int y = fibo(n - 2);
    called++;
    ans[n] = x + y;
    return x + y;
}

int main()
{

    int n;

    cin >> n;

    cout << "Fibo: " << fibo(n) << endl;
    cout << "Called: " << called << endl;

    return 0;
}
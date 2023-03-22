#include <bits/stdc++.h>

using namespace std;

// space complexity = O(n)
// n + n/2 + n/3 + n/4 + n/5 + n/6 .....
// time complexity = O(n.log(n))

int main()
{

    int n;
    cin >> n;
    vector<int> primes;
    vector<bool> visited(n + 1);

    for (int i = 2; i <= n; i++)
    {
        if (visited[i] == false)
        {
            primes.push_back(i);
            for (int x = 2; (i * x) <= n; x++)
                visited[i * x] = true;
        }
    }

    cout << "Number of primes = " << primes.size() << "\n";

    for (int i = 0; i < primes.size(); i++)
        cout << primes[i] << " ";

    cout << "\n";

    return 0;
}